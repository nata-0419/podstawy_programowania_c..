#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct Towar{
    string nazwa;
    string dostawca;
    int cena;
};

void TowarDostawcy(Towar towary[], int n, const string& dostawca){
    bool znaleziono = false;
    cout << "Towary dostawcy " << dostawca;
    for (int i = 0; i < n; ++i) {
        if (towary[i].dostawca == dostawca) {
            cout << "Nazwa: " << towary[i].nazwa << ", Cena: " << towary[i].cena << "\n";
            znaleziono = true;
        }
    } if (!znaleziono) {
        cout << "Brak towarow tego dostawcy";
    }
}

void TowarNajtanszy(Towar towary[], int n, const string& dostawca){
    int minCena = -1;
    bool znaleziono = false;

    for (int i=0; i<n; ++i){
        if (towary[i].dostawca == dostawca) {
            if (minCena == -1 || towary[i].cena < minCena) {
                minCena = towary[i].cena;
            }
        }
    } if (minCena != -1) {
        cout << "Towary dostawcy " << dostawca << " o minimalnej cenie " << minCena << endl;
        for (int i = 0; i < n; ++i) {
            if (towary[i].dostawca == dostawca && towary[i].cena == minCena) {
                cout << "Nazwa: " << towary[i].nazwa << ", Cena: " << towary[i].cena << "\n";
                znaleziono = true;
            }
        }
    } else {
        cout << "Brak towarow tego dostawcy";
        } if (!znaleziono) {
            cout << "Brak towarow tego dostawcy o minimalnej cenie";
    }
}


#endif
