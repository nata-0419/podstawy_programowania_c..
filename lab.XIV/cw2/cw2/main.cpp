//2.	W pliku binarnym zosta³y zapisane dane o strukturze: nazwisko, adres, stanowisko, brutto
//(dla celów testowych nale¿y wprowadziæ dane). Napisz program, który na podstawie tych danych
//utworzy raport i zapisz go do pliku tekstowego. Ma on zawieraæ informacje: tytu³ raportu, data raportu,
//kto sporz¹dzi³,  dane z pliku binarnego, podsumowanie i œrednia dla wybranego stanowiska.


#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

struct Pracownik {
    char nazwisko[50];
    char adres[100];
    char stanowisko[50];
    float brutto;
};

void zapiszRaport(Pracownik* pracownicy, int liczbaPracownikow, const string& raportSporzadzonyPrzez) {
    ofstream raport("raport.txt");
    if (!raport) {
        cerr << "Nie udalo siê otworzyc pliku raport.txt!" << endl;
        return;
    }
    raport << "Raport o wynagrodzeniach" << endl;
    time_t teraz = time(0);
    char* data = ctime(&teraz);
    raport << "Data raportu: " << data;
    raport << "Raport sporzadzil: " << raportSporzadzonyPrzez << endl;
    raport << setw(20) << "Nazwisko" << setw(30) << "Adres" << setw(20) << "Stanowisko" << setw(10) << "Brutto" << endl;

    for (int i = 0; i < liczbaPracownikow; ++i) {
        raport << setw(20) << pracownicy[i].nazwisko
               << setw(30) << pracownicy[i].adres
               << setw(20) << pracownicy[i].stanowisko
               << setw(10) << fixed << setprecision(2) << pracownicy[i].brutto << endl;
    }
    string wybraneStanowisko;
    cout << "Podaj stanowisko, dla ktorego chcesz obliczyc srednia pensje: ";
    cin >> wybraneStanowisko;

    float sumaBrutto = 0;
    int liczbaPracownikowNaStanowisku = 0;

    for (int i = 0; i < liczbaPracownikow; ++i) {
        if (wybraneStanowisko == pracownicy[i].stanowisko) {
            sumaBrutto += pracownicy[i].brutto;
            liczbaPracownikowNaStanowisku++;
        }
    }

    if (liczbaPracownikowNaStanowisku > 0) {
        float srednia = sumaBrutto / liczbaPracownikowNaStanowisku;
        raport << "\nSrednia pensja dla stanowiska '" << wybraneStanowisko << "' wynosi: " << fixed << setprecision(2) << srednia << endl;
    } else {
        raport << "\nBrak pracownikow na stanowisku '" << wybraneStanowisko << "' w danych." << endl;
    }

    raport.close();
}

int main() {
    ifstream plikBinar("pracownicy.bin", ios::binary);
    if (!plikBinar) {
        cerr << "Nie udalo siê otworzyc pliku pracownicy.bin!" << endl;
        return 1;
    }
    int liczbaPracownikow = 3;
    Pracownik pracownicy[liczbaPracownikow];

    plikBinar.read(reinterpret_cast<char*>(pracownicy), sizeof(Pracownik) * liczbaPracownikow);
    if (!plikBinar) {
        cerr << "Blad podczas wczytywania danych z pliku binarnego!" << endl;
        return 1;
    }

    plikBinar.close();
    string raportSporzadzonyPrzez;
    cout << "Podaj imie i nazwisko osoby sporzadzajacej raport: ";
    getline(cin, raportSporzadzonyPrzez);
    zapiszRaport(pracownicy, liczbaPracownikow, raportSporzadzonyPrzez);

    return 0;
}
