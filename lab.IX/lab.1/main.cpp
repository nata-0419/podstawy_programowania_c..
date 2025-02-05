#include <iostream>
using namespace std;

void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void wczytaj_dane(int &a, int &b) {
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
}

void wypisz_przed_zamiana(int a, int b) {
    cout << "Przed zamiana: a = " << a << ", b = " << b << endl;
}

void wypisz_po_zamiana(int a, int b) {
    cout << "Po zamianie: a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b;
    wczytaj_dane(a, b);
    wypisz_przed_zamiana(a, b);
    zamien(&a, &b);
    wypisz_po_zamiana(a, b);

    return 0;
}
