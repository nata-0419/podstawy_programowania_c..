///*
//6. Napisz program, który umo¿liwi wykonywanie, dla tablicy jednowymiarowej dynamicznej
//    liczb ca³kowitych, nastêpuj¹cych operacji realizowanych przez funkcje:
//a) dodawanie nowego elementu,
//b) usuwanie istniej¹cego elementu,
//c) utworzenie tablicy zawieraj¹cej elementy parzyste,
//d) wyœwietlanie tablicy.
//Dane przekazuj przez wskaŸnik.
//
//*/
#include <iostream>
using namespace std;

void dodajElement(int** tablica, int* rozmiar, int nowyElement) {
    int* nowaTablica = new int[*rozmiar + 1];
    for (int i = 0; i < *rozmiar; ++i) {
        nowaTablica[i] = (*tablica)[i];
    }
    nowaTablica[*rozmiar] = nowyElement;
    delete[] *tablica;
    *tablica = nowaTablica;
    ++(*rozmiar);
}

void usunElement(int** tablica, int* rozmiar, int indeks) {
    if (indeks < 0 || indeks >= *rozmiar) {
        cout << "Indeks poza zakresem!" << endl;
        return;
    }
    int* nowaTablica = new int[*rozmiar - 1];
    for (int i = 0; i < indeks; ++i) {
        nowaTablica[i] = (*tablica)[i];
    }
    for (int i = indeks + 1; i < *rozmiar; ++i) {
        nowaTablica[i - 1] = (*tablica)[i];
    }
    delete[] *tablica;
    *tablica = nowaTablica;
    --(*rozmiar);
}

int* parzyste(int* tablica, int rozmiar, int* nowyRozmiar) {
    int liczbaParzystych = 0;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] % 2 == 0) {
            ++liczbaParzystych;
        }
    }
    int* nowaTablica = new int[liczbaParzystych];
    *nowyRozmiar = liczbaParzystych;
    int j = 0;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] % 2 == 0) {
            nowaTablica[j++] = tablica[i];
        }
    }
    return nowaTablica;
}

void wyswietlTablice(int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int* tablica = 0;
    int rozmiar = 0;

    dodajElement(&tablica, &rozmiar, 5);
    dodajElement(&tablica, &rozmiar, 10);
    dodajElement(&tablica, &rozmiar, 7);
    dodajElement(&tablica, &rozmiar, 2);
    dodajElement(&tablica, &rozmiar, 4);
    dodajElement(&tablica, &rozmiar, 12);

    cout << "Tablica po dodaniu elementow: ";
    wyswietlTablice(tablica, rozmiar);

    usunElement(&tablica, &rozmiar, 1);
    cout << "Tablica po usunieciu elementu: ";
    wyswietlTablice(tablica, rozmiar);

    int nowyRozmiar;
    int* tablicaParzystych = parzyste(tablica, rozmiar, &nowyRozmiar);
    cout << "Tablica z liczbami parzystymi: ";
    wyswietlTablice(tablicaParzystych, nowyRozmiar);

    delete[] tablica;
    delete[] tablicaParzystych;

    return 0;
}
