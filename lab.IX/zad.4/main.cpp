/*
4. Napisz program, który zapisuje wartoœci funkcji f(x)=2x-5 do tablicy n-elementowej
dla x zakresu [-2,6]. Wypisz otrzyman¹ tablicê. Dane przekazuj przez wskaŸnik.


*/

#include <iostream>
#include <cmath>

using namespace std;


void wczytajRozmiar(int& n) {
    cout << "Podaj rozmiar tablicy (n): ";
    cin >> n;
}

void obliczIwyswietlFunkcje(double* tablica, int n) {
    double x_start = -2.0;
    double krok = (6.0 - (-2.0)) / (n - 1);

    for (int i = 0; i < n; i++) {
        double x = x_start + i * krok;
        *(tablica + i) = 2 * x - 5;
    }
    cout << "Wartosci funkcji f(x) = 2x - 5 dla x w zakresie [-2, 6]:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "f(x" << i << ") = " << *(tablica + i) << endl;
    }
}

int main() {
    int n;
    wczytajRozmiar(n);
    double* tablica = new double[n];
    obliczIwyswietlFunkcje(tablica, n);
    delete[] tablica;

    return 0;
}










//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//void obliczF(double* tab, int*n) {
//    cout << "Podaj rozmiar tablicy (n): ";
//    cin >> n;
//    double x_start = -2.0;
//    double krok = (6.0 - (-2.0)) / (n - 1);
//
//    for (int i = 0; i < n; i++) {
//        double x = x_start + i * krok;
//        *(tab+1) = 2 * x - 5;
//    }
//}
//
//void wyswietlT(double* tab, int n) {
//    cout << "Wartosci funkcji f(x) = 2x - 5 dla x w zakresie [-2, 6]:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "f(x" << i << ") = " << tablica[i] << endl;
//    }
//}
//
//int main() {
//
//    obliczF(n;
//    wyswietlT();
//
//    delete[] tablica;
//    return 0;
//}


