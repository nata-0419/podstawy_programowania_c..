/*
9.	Dana jest tablica n-elementowa liczb ca�kowitych. Napisz program obliczaj�cy sum� cyfr tych liczb.
Wypisz dane i wynik oblicze�. We wczytywaniu danych oraz obliczeniach u�yj funkcji rekurencyjnych.

*/

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void generujliczby(int n, int tab[], int index) {
    if (index == n) {
        return;
    }
    tab[index] = rand() % 100 + 1;
    cout << tab[index] << " ";
    generujliczby(n, tab, index + 1);
}

int suma_cyfr(int liczba) {
    int suma = 0;
    while (liczba > 0) {
        suma += liczba % 10;
        liczba /= 10;
    }
    return suma;
}

int suma(int tab[], int n) {
    if (n == 0) {
        return 0;
    }
    return suma_cyfr(tab[n - 1]) + suma(tab, n - 1);
}

int main() {
    int n;
    cout << "Podaj liczbe elementow: "; cin >> n;
    int* tab = new int[n];
    srand(time(0));

    cout << "Wygenerowany ciag liczb calkowitych: " << endl;
    generujliczby(n, tab, 0);

    int wynik = suma(tab, n);
    cout << endl;
    cout <<"Suma cyfr wszystkich elementow tablicy: " << wynik << endl;
    delete[] tab;
    return 0;
}
