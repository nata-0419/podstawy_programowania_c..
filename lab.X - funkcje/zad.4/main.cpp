/*
4.	Napisz funkcj�, kt�ra zwr�ci 1, w przypadku, gdy suma cyfr
danej liczby, oraz suma cyfr tej liczby w notacji binarnej
b�dzie taka sama w przeciwnym wypadku zwr�ci 0. Wy�wietl wszystkie
liczby z przedzia�u <n, m>, gdzie n i m podajemy z klawiatury,
kt�re spe�niaj� podane kryterium. W zadaniu wykorzystaj trzy funkcje:
�	funkcja zwracaj�ca sum� cyfr w systemie dziesi�tnym
�	funkcja zwracaj�ca sum� cyfr w systemie binarnym
�	funkcja zwracaj�ca 1 lub 0, w zale�no�ci od spe�nienia kryteri�w

*/



#include <iostream>

using namespace std;

int sumaCyfrDziesietnych(int liczba) {
    int suma = 0;
    while (liczba > 0) {
        suma += liczba % 10;
        liczba /= 10;
    }
    return suma;
}

int sumaCyfrBinarnych(int liczba) {
    int suma = 0;
    while (liczba > 0) {
        suma += liczba % 2;
        liczba /= 2;
    }
    return suma;
}

int porownajSumyCyfr(int liczba) {
    int sumaDziesietna = sumaCyfrDziesietnych(liczba);
    int sumaBinarna = sumaCyfrBinarnych(liczba);

    if (sumaDziesietna == sumaBinarna) {
        return 1;
    }
    return 0;
}

void wczytajDane(int &n, int &m) {
    cout << "Podaj poczatek przedzialu n: ";
    cin >> n;
    cout << "Podaj koniec przedzialu m: ";
    cin >> m;
}

void sprawdzLiczby(int n, int m) {
    cout << "Liczby, ktore spelniaja warunek:\n";
    for (int i = n; i <= m; ++i) {
        if (porownajSumyCyfr(i) == 1) {
            cout << i << " ";
        }
    }
}

int main() {
    int n, m;

    wczytajDane(n, m);
    sprawdzLiczby(n, m);

    return 0;
}
