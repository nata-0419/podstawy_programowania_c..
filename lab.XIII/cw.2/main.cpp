//2.	W pliku kandydat.txt w ka¿dym wierszu podano nastêpuj¹ce dane:
//•	imie: 10 znaków,
//•	nazwisko: 20 znaków,
//•	kierunek: 10 znaków,
//•	matura- suma punktów.
//Napisz program, który wczyta dane z pliku, obliczy  maksymaln¹ sumê punktów i dopisze do pliku dane studenta o najlepszym wyniku.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string kierunek;
    int matura;
};

int wczytajStudentow(const string& nazwa_pliku, Student student[], int max_kandydatow) {
    ifstream plik(nazwa_pliku);
    int liczbaKandydatow = 0;
    string linia;
    while (getline(plik, linia) && liczbaKandydatow < max_kandydatow) {
        stringstream ss(linia);
        string imie, nazwisko, kierunek, maturaStr;
        int matura;

        getline(ss, imie, ';');
        getline(ss, nazwisko, ';');
        getline(ss, kierunek, ';');
        getline(ss, maturaStr, ';');

        stringstream(maturaStr) >> matura;
        student[liczbaKandydatow] = {imie, nazwisko, kierunek, matura};
        liczbaKandydatow++;
    }
    plik.close();
    return liczbaKandydatow;
}

void zapiszStudenta(const string& nazwaPliku, const Student& najlepszy) {
    ofstream plikWyjsciowy(nazwaPliku, ios::app);

    plikWyjsciowy << endl << "Najlepszy kandydat: " << endl;
    plikWyjsciowy << "Imie: " << najlepszy.imie << endl;
    plikWyjsciowy << "Nazwisko: " << najlepszy.nazwisko << endl;
    plikWyjsciowy << "Kierunek: " << najlepszy.kierunek << endl;
    plikWyjsciowy << "Suma punktow: " << najlepszy.matura << endl;

    plikWyjsciowy.close();
}

int main() {
    const int max_kandydatow = 100;
    Student student[max_kandydatow];
    int liczbaKandydatow = wczytajStudentow("kandydat.txt", student, max_kandydatow);

    if (liczbaKandydatow == 0) {
        cout << "Brak kandydatow w pliku." << endl;
        return 1;
    }

    Student najlepszy = student[0];
    for (int i = 1; i < liczbaKandydatow; i++) {
        if (student[i].matura > najlepszy.matura) {
            najlepszy = student[i];
        }
    }
    zapiszStudenta("kandydat.txt", najlepszy);
    cout << "Dane najlepszego kandydata zostaly dopisane do pliku." << endl;

    return 0;
}
