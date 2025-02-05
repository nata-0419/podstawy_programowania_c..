/*
5.	Operacja „*” jest ona zdefiniowana dla argumentów typu liczbowego.
Wykorzystuj¹c mechanizm przeci¹¿ania zdefiniuj funkcje dla operacji:
•	Mno¿enia wektora przez liczbê,
•	Obliczania iloczynu skalarnego dwu wektorów,
•	Mno¿enia dwu macierzy kwadratowych przez siebie,
•	Mno¿enia pól liczbowych w dwu ró¿nych strukturach tego samego typu.
Napisz program, który w odpowiedni sposób wykorzysta te funkcje.



*/
#include <iostream>
using namespace std;

struct Wektor2D {
    float x, y;

    Wektor2D operator*(float liczba) const {
        return Wektor2D{x * liczba, y * liczba};
    }

    float operator*(const Wektor2D& w) const {
        return x * w.x + y * w.y;
    }
};

struct Wektor3D {
    float x, y, z;

    Wektor3D operator*(float liczba) const {
        return Wektor3D{x * liczba, y * liczba, z * liczba};
    }

    float operator*(const Wektor3D& w) const {
        return x * w.x + y * w.y + z * w.z;
    }
};

struct Macierz2x2 {
    float m[2][2];

    Macierz2x2 operator*(const Macierz2x2& m2) const {
        Macierz2x2 wynik;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                wynik.m[i][j] = 0;
                for (int k = 0; k < 2; ++k) {
                    wynik.m[i][j] += m[i][k] * m2.m[k][j];
                }
            }
        }
        return wynik;
    }

    void wyswietl() const {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
};

struct StrukturaA {
    float liczba;
};


struct StrukturaB {
    float liczba;
};

float operator*(const StrukturaA& a, const StrukturaB& b) {
    return a.liczba * b.liczba;
}

int main() {
    Wektor2D w2d;
    cout << "Podaj wspolczynniki wektora 2D (x, y): "; cin >> w2d.x >> w2d.y;

    float skalar;
    cout << "Podaj liczbe do mnozenia wektora przez liczbe: "; cin >> skalar;
    Wektor2D w2d_wynik = w2d * skalar;
    cout << "Wektor 2D po mnozeniu przez liczbê: (" << w2d_wynik.x << ", " << w2d_wynik.y << ")\n";

    Wektor2D w2d_2;
    cout << "Podaj wspolczynniki drugiego wektora 2D (x, y): "; cin >> w2d_2.x >> w2d_2.y;

    float iloczyn_skalarny = w2d * w2d_2;
    cout << "Iloczyn skalarny wektorow 2D: " << iloczyn_skalarny << endl;

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
    macierz_wynik.wyswietl();

    StrukturaA a;
    StrukturaB b;
    cout << "Podaj liczbe dla struktury A: "; cin >> a.liczba;
    cout << "Podaj liczbe dla struktury B: "; cin >> b.liczba;

    float wynik_mnozenia = a * b;
    cout << "Wynik mnozenia liczb w strukturach: " << wynik_mnozenia << endl;

    return 0;
}


