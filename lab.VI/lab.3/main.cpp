/*
Dana jest tablica n-elementowa liczb ca³kowitych. Wypisz elementy o indeksach nieparzystych.
WEJŒCIE:
5 [1, 2, 4, 7, 7]
WYJŒCIE:
2,7
*/


#include <iostream>

using namespace std;

int main()
{
    const int wymiar=10;
    int tab[wymiar];
    int a;
    cout << "Podaj wymiar tablicy: "; cin >> a;
    for (int i=0; i<a; i++) {
        cout << "tab["<<i<<"]= "; cin >> tab[i];
    }
    int suma=0;
    for (int i=0;i<a;i++)
        if (i%2==1)
    cout<<"Indeksy nieparzyste to:"<<tab[i]<<endl;

    return 0;
}
