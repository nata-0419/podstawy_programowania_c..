/*
2.	Napisz funkcj� wy�wietlaj�c� dowolny wiersz i kolumn� z macierzy.
Numer wiersza lub kolumny ma by� podawany przez u�ytkownika ( przekazywany do funkcji za pomoc� referencji)
i  powinien znajdowa� si� w zadanym przez programist� zakresie.

*/
#include <iostream>
using namespace std;

void wyswietlW_K(int** macierz, int& numer, char typ, int wiersze, int kolumny) {
    if (typ == 'w') {
        if (numer >= 0 && numer < wiersze) {
            cout << "Wiersz " << numer << ": ";
            for (int i = 0; i < kolumny; ++i) {
                cout << macierz[numer][i] << " ";
            }
            cout << endl;
        } else {
            cout << "Numer wiersza jest poza zakresem!" << endl;
        }
    } else if (typ == 'k') {
        if (numer >= 0 && numer < kolumny) {
            cout << "Kolumna " << numer << ": ";
            for (int i = 0; i < wiersze; ++i) {
                cout << macierz[i][numer] << " ";
            }
            cout << endl;
        } else {
            cout << "Numer kolumny jest poza zakresem!" << endl;
        }
    } else {
        cout << "Nieprawid�owy typ. Wpisz 'w' dla wiersza lub 'k' dla kolumny." << endl;
    }
}

int main() {
    int wiersze = 10, kolumny = 10;

    int** macierz = new int*[wiersze];
    for (int i = 0; i < wiersze; ++i) {
        macierz[i] = new int[kolumny];
    }

    int licznik = 1;
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            macierz[i][j] = licznik++;
        }
    }

    int numer;
    char typ;
    cout << "Podaj numer wiersza lub kolumny (0-9): "; cin >> numer;
    cout << "Czy chcesz wy�wietli� wiersz (w) czy kolumn� (k)? "; cin >> typ;

    wyswietlW_K(macierz, numer, typ, wiersze, kolumny);

    for (int i = 0; i < wiersze; ++i) {
        delete[] macierz[i];
    }
    delete[] macierz;
    return 0;
}
