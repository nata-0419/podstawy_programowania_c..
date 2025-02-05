#include <iostream>
using namespace std;

void znajdzM(int&& macierz, int n, int m, int& maxWartosc, int& numerKolumny) {
    maxWartosc = macierz[0][0];
    numerKolumny = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (macierz[i][j] > maxWartosc) {
                maxWartosc = macierz[i][j];
                numerKolumny = j;
            }
        }
    }
}

void wyswietlM(int&& macierz, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
}

void wczytajM(int**& macierz, int n, int m) {
    cout << "Podaj elementy macierzy:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "macierz[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }
}

int main() {
    int n, m;

    cout << "Podaj liczbe wierszy: "; cin >> n;
    cout << "Podaj liczbe kolumn: "; cin >> m;

    int&& macierz = new int*[n];
    for (int i = 0; i < n; ++i) {
        macierz[i] = new int[m];
    }

    wczytajM(macierz, n, m);

    int maxWartosc, maxKolumna;

    cout << "\nTablica macierzy:" << endl;
    wyswietlM(macierz, n, m);

    znajdzM(macierz, n, m, maxWartosc, maxKolumna);

    cout << "\nMaksymalna wartoœæ w macierzy to: " << maxWartosc << endl;
    cout << "Numer kolumny z maksymalnym elementem: " << maxKolumna + 1 << endl;

    for (int i = 0; i < n; ++i) {
        delete[] macierz[i];
    }
    delete[] macierz;

    return 0;
}
