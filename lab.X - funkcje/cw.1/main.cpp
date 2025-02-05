#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int w = 10;

void generuj_macierz(int A[][w], int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            A[i][j] = rand() % 10;
        }
    }
}

void wyswietl_macierz(int A[][w], int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void mnozenie_macierzy(int A[][w], int B[][w], int C[][w], int wA, int kA, int wB, int kB, int& mozliwe) {
    if (kA == wB) {
        mozliwe = 1;
        for (int i = 0; i < wA; i++) {
            for (int j = 0; j < kB; j++) {
                C[i][j] = 0;
                for (int k = 0; k < kA; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    } else {
        mozliwe = -1;
    }
}

int main() {
    srand(time(0));
    int wA, kA, wB, kB;
    cout << "Podaj wymiary macierzy A (wiersze, kolumny): "; cin >> wA >> kA;
    cout << "Podaj wymiary macierzy B (wiersze, kolumny): "; cin >> wB >> kB;

    if (kA != wB) {
        cout << "Mnozenie macierzy jest niemo¿liwe!" << endl;
        return 0;
    }
    const int w = 10;
    int A[w][w], B[w][w], C[w][w];

    generuj_macierz(A, wA, kA);
    generuj_macierz(B, wB, kB);

    cout << "\nMacierz A:\n";
    wyswietl_macierz(A, wA, kA);

    cout << "\nMacierz B:\n";
    wyswietl_macierz(B, wB, kB);

    int mozliwe = 0;
    mnozenie_macierzy(A, B, C, wA, kA, wB, kB, mozliwe);

    if (mozliwe == 1) {
        cout << "\nWynik mnozenia macierzy A i B (macierz C):\n";
        wyswietl_macierz(C, wA, kB);
    } else {
        cout << "Mnozenie macierzy jest niemozliwe!" << endl;
    }

    return 0;
}
