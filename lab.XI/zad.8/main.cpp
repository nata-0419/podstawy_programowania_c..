#include <iostream>

#include "funkcjePrzeciazeniowe.h.cpp"
#include "wypisywanieWynkow.h.cpp"

using namespace std;
int main() {
    Wektor2D w2d;
    cout << "Podaj wspolczynniki wektora 2D (x, y): "; cin >> w2d.x >> w2d.y;

    float skalar;
    cout << "Podaj liczbe do mnozenia wektora przez liczbe: "; cin >> skalar;
    Wektor2D w2d_wynik = w2d * skalar;
    wyswietlWektor2D(w2d_wynik.x, w2d_wynik.y);

    Wektor2D w2d_2;
    cout << "Podaj wspolczynniki drugiego wektora 2D (x, y): ";
    cin >> w2d_2.x >> w2d_2.y;

    float iloczyn_skalarny = w2d * w2d_2;
    wyswietlIloczynSkalarny(iloczyn_skalarny);

    Macierz2x2 macierz1;
    cout << "Podaj elementy pierwszej macierzy 2x2 (4 liczby): ";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> macierz1.m[i][j];
        }
    }

    Macierz2x2 macierz2;
    cout << "Podaj elementy drugiej macierzy 2x2 (4 liczby): ";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> macierz2.m[i][j];
        }
    }

    Macierz2x2 macierz_wynik = macierz1 * macierz2;
    cout << "Wynik mnozenia macierzy 2x2:\n";
    wyswietlMacierz(macierz_wynik.m);

    StrukturaA a;
    StrukturaB b;
    cout << "Podaj liczbe dla struktury A: "; cin >> a.liczba;
    cout << "Podaj liczbe dla struktury B: "; cin >> b.liczba;

    float wynik_mnozenia = a * b;
    cout << "Wynik mnozenia liczb w strukturach: " << wynik_mnozenia << std::endl;

    return 0;
}
