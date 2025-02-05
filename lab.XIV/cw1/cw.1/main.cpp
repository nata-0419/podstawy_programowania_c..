//1.	Maj¹c dany nastêpuj¹cy plik wejœciowy rozdzielany przecinkami:
//Nazwisko autora, Tytu³, Cena, iloœæ egzemplarzy
//Sienkiewicz, Krzy¿acy, 50, 100
//Prus, Lalka, 78, 23
//Gombrowicz, Ferdydurke, 66, 55
//Napisz program wczytuj¹cy z niego dane korzystaj¹c uprzednio zadeklarowanej struktury.
//Nastêpnie posortuj te dane rosn¹co (dowolnym algorytmem sortowania) wed³ug iloœci egzemplarzy i zapisz je do pliku binarnego.


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

struct ksiazka {
    string autor;
    string tytul;
    int cena;
    int ilosc;
};

bool posortuj(const ksiazka& a, const ksiazka& b) {
    return a.ilosc < b.ilosc;
}

void utworzPlikWejsciowy() {
    ofstream plikWejsciowy("dane.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo sie otworzyc pliku" << endl;
        return;
    }
    plikWejsciowy << "Sienkiewicz, Krzyzacy, 50, 100\n";
    plikWejsciowy << "Prus, Lalka, 78, 23\n";
    plikWejsciowy << "Gombrowicz, Ferdydurke, 66, 55\n";
    plikWejsciowy.close();
}

void przetworzPlik() {
    utworzPlikWejsciowy();
    ifstream plikWejsciowy("dane.txt");
    if (!plikWejsciowy.is_open()) {
        cout << "Nie udalo siê otworzyc pliku" << endl;
        return;
    }

    ksiazka ksiazka[100];
    int liczba = 0;
    string linia;

    while (getline(plikWejsciowy, linia) && liczba < 100) {
        size_t pos = 0;
        string tokeny[4];
        int indeksTokenu = 0;

        while ((pos = linia.find(",")) != string::npos && indeksTokenu < 4) {
            tokeny[indeksTokenu++] = linia.substr(0, pos);
            linia.erase(0, pos + 1);
        }
        tokeny[indeksTokenu] = linia;

        if (indeksTokenu == 4) {
            ksiazka[liczba].autor = tokeny[0];
            ksiazka[liczba].tytul = tokeny[1];
            ksiazka[liczba].cena = stod(tokeny[2]);
            ksiazka[liczba].ilosc = stod(tokeny[3]);

            liczba++;
        }
    }

    plikWejsciowy.close();
    cout << "Dane przed sortowaniem" << endl;
    for (int i = 0; i < liczba; i++) {
        cout << ksiazka[i].autor << " " << ksiazka[i].tytul << " " << ksiazka[i].cena << " " << ksiazka[i].ilosc<< endl;
    }
    sort(ksiazka, ksiazka + liczba, posortuj);


    cout << "Dane posortowane" << endl;
    for (int i = 0; i < liczba; i++) {
        cout << ksiazka[i].autor << " " << ksiazka[i].tytul << ksiazka[i].cena << ksiazka[i].ilosc<< endl;
    }
    ofstream plikWyjsciowy("ksiazki_posortowane.bin", ios::binary);
    if (!plikWyjsciowy.is_open()) {
        cout << "Nie udalo siê otworzyc pliku" << endl;
        return;
    }

    for (int i = 0; i < liczba; ++i) {
        size_t rozmiarImienia = ksiazka[i].autor.size();
        size_t rozmiarNazwiska = ksiazka[i].tytul.size();

        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarImienia), sizeof(rozmiarImienia));
        plikWyjsciowy.write(ksiazka[i].autor.c_str(), rozmiarImienia);
        plikWyjsciowy.write(reinterpret_cast<const char*>(&rozmiarNazwiska), sizeof(rozmiarNazwiska));
        plikWyjsciowy.write(ksiazka[i].tytul.c_str(), rozmiarNazwiska);

        plikWyjsciowy.write(reinterpret_cast<const char*>(&ksiazka[i].cena), sizeof(ksiazka[i].cena));
        plikWyjsciowy.write(reinterpret_cast<const char*>(&ksiazka[i].ilosc), sizeof(ksiazka[i].ilosc));

    }
    plikWyjsciowy.close();

    cout << "Dane zostaly zapisane do pliku osoby_posortowane.bin." << endl;

}

int main() {
    przetworzPlik();
    return 0;
}





