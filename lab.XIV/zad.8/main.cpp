#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct Towar {
    char towar[50];
    char dostawca[50];
    int ilosc;
    float cena_jednostkowa;
};

void zapiszRaport(Towar* towary, int liczbaTowarow, const string& raportSporzadzonyPrzez) {
    ofstream raport("raport.txt");
    if (!raport) {
        cerr << "Nie udalo się otworzyć pliku raport.txt!" << endl;
        return;
    }

    raport << "Raport o towarach i zamowieniach" << endl;

    time_t teraz = time(0);
    char* data = ctime(&teraz);
    raport << "Data raportu: " << data;

    raport << "Raport sporzadzil: " << raportSporzadzonyPrzez << endl;

    raport << "\n\n" << setw(20) << "Towar" << setw(20) << "Dostawca" << setw(10) << "Ilosc" << setw(15) << "Cena jednostkowa" << setw(15) << "Wartosc" << endl;
    for (int i = 0; i < liczbaTowarow; ++i) {
        float wartosc = towary[i].ilosc * towary[i].cena_jednostkowa;
        raport << setw(20) << towary[i].towar
               << setw(20) << towary[i].dostawca
               << setw(10) << towary[i].ilosc
               << setw(15) << fixed << setprecision(2) << towary[i].cena_jednostkowa
               << setw(15) << fixed << setprecision(2) << wartosc << endl;
    }

    string wybranyDostawca;
    cout << "Podaj nazwe dostawcy, dla ktorego chcesz obliczyc podsumowanie: ";
    cin >> wybranyDostawca;

    float sumaWartosci = 0;
    int liczbaTowarowDlaDostawcy = 0;

    for (int i = 0; i < liczbaTowarow; ++i) {
        if (wybranyDostawca == towary[i].dostawca) {
            float wartosc = towary[i].ilosc * towary[i].cena_jednostkowa;
            sumaWartosci += wartosc;
            liczbaTowarowDlaDostawcy++;
        }
    }

    if (liczbaTowarowDlaDostawcy > 0) {
        float sredniaWartosc = sumaWartosci / liczbaTowarowDlaDostawcy;
        raport << "\nPodsumowanie dla dostawcy '" << wybranyDostawca << "':" << endl;
        raport << "Calkowita wartosc zamowionych towarow: " << fixed << setprecision(2) << sumaWartosci << endl;
        raport << "Srednia wartosc zamowienia: " << fixed << setprecision(2) << sredniaWartosc << endl;
    } else {
        raport << "\nBrak towarow dla dostawcy '" << wybranyDostawca << "' w danych." << endl;
    }

    raport.close();
}

void utworzPlikBinar() {
    Towar towary[3] = {
        {"Laptop", "samsung", 10, 2500.00},
        {"Smartfon", "samsung", 15, 1200.50},
        {"Monitor", "lenovo", 8, 1800.75}
    };

    ofstream plikBinar("towary.dat", ios::binary);
    if (!plikBinar) {
        cerr << "Nie udalo sie otworzyc pliku binarnego!" << endl;
        return;
    }

    plikBinar.write(reinterpret_cast<char*>(towary), sizeof(Towar) * 3);
    plikBinar.close();

    cout << "Dane zostaly zapisane do pliku binarnego." << endl;
}

int main() {
    system("chcp 65001>>null");

    utworzPlikBinar();

    ifstream plikBinar("towary.dat", ios::binary);
    if (!plikBinar) {
        cerr << "Nie udalo sie otworzyc pliku towarow.dat!" << endl;
        return 1;
    }

    int liczbaTowarow = 3;
    Towar towary[liczbaTowarow];

    plikBinar.read(reinterpret_cast<char*>(towary), sizeof(Towar) * liczbaTowarow);
    if (!plikBinar) {
        cerr << "Blad podczas wczytywania danych z pliku binarnego!" << endl;
        return 1;
    }

    plikBinar.close();

    string raportSporzadzonyPrzez;
    cout << "Podaj imie i nazwisko osoby sporzadzajacej raport: ";
    getline(cin, raportSporzadzonyPrzez);

    zapiszRaport(towary, liczbaTowarow, raportSporzadzonyPrzez);

    return 0;
}
