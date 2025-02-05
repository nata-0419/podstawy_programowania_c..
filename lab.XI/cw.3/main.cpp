/*
3.	Dana jest lista towarów o strukturze: nazwa, dostawca, cena zapisana
w tablicy. Napisz program, który wprowadzi dane, wypisze towary dostawcy o
zadanej nazwie, wypisze towary o minimalnej cenie danego dostawcy
(jak wiêcej, to wszystkie). W programie maj¹ byæ dwa pliki: pierwszy zawiera
funkcjê g³ówn¹, drugi pozosta³e funkcje.

*/

#include <iostream>
#include <cstring>

#include "funkcje.h"
using namespace std;

int main()
{
const int max_towarow = 100;
Towar towary[max_towarow];
int n;

    cout << "Podaj liczbe towarow: "; cin >> n;

 for (int i = 0; i < n; ++i) {
        cout << "Towar " << i + 1 << ":\n";
        cout << "Podaj nazwe towaru: "; cin >> towary[i].nazwa;
        cout << "Podaj dostawce: "; cin >> towary[i].dostawca;
        cout << "Podaj cene: "; cin >> towary[i].cena;
    }
    string dostawca;
    cout << "Podaj nazwe dostawcy do wyszukania: "; cin >> dostawca;
    TowarDostawcy(towary, n, dostawca);

    cout << "Podaj dostawce, a ja wypisze towary o minimalnej cenie: "; cin >> dostawca;
    TowarNajtanszy(towary, n, dostawca);
return 0;
}
