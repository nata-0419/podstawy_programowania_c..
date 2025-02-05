#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    double wzrost;
};

bool porownajPoNazwisku(const Osoba& a, const Osoba& b) {
    return a.nazwisko < b.nazwisko;
}

void utworzPlikWejsciowy() {
    ofstream plikWejsciowy("osoby.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo się otworzyc pliku" << endl;
        return;
    }
    plikWejsciowy << "Jan,Nowak,1.85\n";
    plikWejsciowy << "Zofia,Kowalska,2.30\n";
    plikWejsciowy << "Tomasz,Kozak,1.60\n";
    plikWejsciowy << "Klara,Rzepka,1.75\n";
    plikWejsciowy.close();
}

void przetworzPlik() {
    utworzPlikWejsciowy();
    ifstream plikWejsciowy("osoby.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo się otworzyc pliku" << endl;
        return;
    }

    Osoba osoby[100];
    int liczbaOsob = 0;
    string linia;

    while (getline(plikWejsciowy, linia) && liczbaOsob < 100) {
        size_t pos = 0;
        string tokeny[3];
        int indeksTokenu = 0;

        while ((pos = linia.find(",")) != string::npos && indeksTokenu < 3) {
            tokeny[indeksTokenu++] = linia.substr(0, pos);
            linia.erase(0, pos + 1);
        }
        tokeny[indeksTokenu] = linia;

        if (indeksTokenu == 2) {
            osoby[liczbaOsob].imie = tokeny[0];
            osoby[liczbaOsob].nazwisko = tokeny[1];
            osoby[liczbaOsob].wzrost = stod(tokeny[2]);
            liczbaOsob++;
        }
    }

    plikWejsciowy.close();

    // Wyświetlanie osób przed posortowaniem
    cout << "Dane przed sortowaniem" << endl;
    for (int i = 0; i < liczbaOsob; i++) {
        cout << osoby[i].imie << " " << osoby[i].nazwisko << endl;
    }

    // Sortowanie po nazwisku
    sort(osoby, osoby + liczbaOsob, porownajPoNazwisku);
    cout << endl;

    // Wyświetlanie osób po posortowaniu
    cout << "Dane posortowane" << endl;
    for (int i = 0; i < liczbaOsob; i++) {
        cout << osoby[i].imie << " " << osoby[i].nazwisko << endl;
    }

    // Zapis do pliku binarnego
    ofstream plikWyjsciowy("osoby_posortowane.bin", ios::binary);
    if (!plikWyjsciowy.is_open()) {
        cout << "Nie udalo się otworzyc pliku" << endl;
        return;
    }

    for (int i = 0; i < liczbaOsob; ++i) {
        size_t rozmiarImienia = osoby[i].imie.size();
        size_t rozmiarNazwiska = osoby[i].nazwisko.size();

        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarImienia), sizeof(rozmiarImienia));
        plikWyjsciowy.write(osoby[i].imie.c_str(), rozmiarImienia);
        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarNazwiska), sizeof(rozmiarNazwiska));
        plikWyjsciowy.write(osoby[i].nazwisko.c_str(), rozmiarNazwiska);

        plikWyjsciowy.write(reinterpret_cast<const char*>(&osoby[i].wzrost), sizeof(osoby[i].wzrost));
    }

    plikWyjsciowy.close();

    cout << "Dane zostaly zapisane do pliku osoby_posortowane.bin." << endl;
}

int main() {
    przetworzPlik();
    return 0;
}
