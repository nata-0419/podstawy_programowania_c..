#ifndef wypisywanieWynkow.h
#define wypisywanieWynkow.h

#include <iostream>

using namespace std;

void wyswietlMacierz(const float m[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void wyswietlWektor2D(float x, float y) {
    cout << "Wektor 2D: (" << x << ", " << y << ")\n";
}

void wyswietlIloczynSkalarny(float iloczyn_skalarny) {
    cout << "Iloczyn skalarny: " << iloczyn_skalarny << endl;
}

#endif
