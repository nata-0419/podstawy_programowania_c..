#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

struct Ksiazka {
    string nazwiskoAutora;
    string tytul;
    double cena;
    int iloscEgzemplarzy;
};

bool porownajPoIlosciEgzemplarzy(const Ksiazka& a, const Ksiazka& b) {
    return a.iloscEgzemplarzy < b.iloscEgzemplarzy;
}

void utworzPlikWejsciowy() {
    ofstream plikWejsciowy("ksiazki.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return;
    }
    plikWejsciowy << "Sienkiewicz,Krzyzacy,50,100\n";
    plikWejsciowy << "Prus,Lalka,78,23\n";
    plikWejsciowy << "Gombrowicz,Ferdydurke,66,55\n";
    plikWejsciowy.close();
}

void przetworzPlik() {
    utworzPlikWejsciowy();
    ifstream plikWejsciowy("ksiazki.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return;
    }

    Ksiazka ksiazki[100];
    int liczbaKsiazek = 0;
    string linia;

    while (getline(plikWejsciowy, linia) && liczbaKsiazek < 100) {
        size_t pos = 0;
        string tokeny[4];
        int indeksTokenu = 0;
        while ((pos = linia.find(",")) != string::npos && indeksTokenu < 4) {
            tokeny[indeksTokenu++] = linia.substr(0, pos);
            linia.erase(0, pos + 1);
        }
        tokeny[indeksTokenu] = linia;
        if (indeksTokenu == 3) {
            ksiazki[liczbaKsiazek].nazwiskoAutora = tokeny[0];
            ksiazki[liczbaKsiazek].tytul = tokeny[1];
            ksiazki[liczbaKsiazek].cena = stod(tokeny[2]);
            ksiazki[liczbaKsiazek].iloscEgzemplarzy = stoi(tokeny[3]);
            liczbaKsiazek++;
        }
    }

    plikWejsciowy.close();
    sort(ksiazki, ksiazki + liczbaKsiazek, porownajPoIlosciEgzemplarzy);
    cout << "Posortowane ksiazki po ilosci egzemplarzy:\n";
    for (int i = 0; i < liczbaKsiazek; i++) {
        cout << ksiazki[i].nazwiskoAutora << ", "
             << ksiazki[i].tytul << ", "
             << ksiazki[i].cena << " PLN, "
             << ksiazki[i].iloscEgzemplarzy << " egzemplarzy\n";
    }
    ofstream plikWyjsciowy("ksiazki_posortowane.bin", ios::binary);
    if (!plikWyjsciowy.is_open()) {
        cout << "Nie udalo się otworzyc pliku" << endl;
        return;
    }

    for (int i = 0; i < liczbaKsiazek; ++i) {
        size_t rozmiarNazwiska = ksiazki[i].nazwiskoAutora.size();
        size_t rozmiarTytulu = ksiazki[i].tytul.size();

        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarNazwiska), sizeof(rozmiarNazwiska));
        plikWyjsciowy.write(ksiazki[i].nazwiskoAutora.c_str(), rozmiarNazwiska);
        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarTytulu), sizeof(rozmiarTytulu));
        plikWyjsciowy.write(ksiazki[i].tytul.c_str(), rozmiarTytulu);

        plikWyjsciowy.write(reinterpret_cast<const char*>(&ksiazki[i].cena), sizeof(ksiazki[i].cena));
        plikWyjsciowy.write(reinterpret_cast<const char*>(&ksiazki[i].iloscEgzemplarzy), sizeof(ksiazki[i].iloscEgzemplarzy));
    }

    plikWyjsciowy.close();

    cout << "Dane zostaly zapisane do pliku ksiazki_posortowane.bin.\n";
}

int main() {
    przetworzPlik();
    return 0;
}
