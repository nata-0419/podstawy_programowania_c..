/*
1.	Napisz program, w który utworzy dynamiczn¹ tablicê dwuwymiarow¹ liczb ca³kowitych o wymiarach podanych przez u¿ytkownika.
    Nastêpnie wype³ni j¹ losowymi liczbami z przedzia³u [100, 300].
    Wydrukuj na ekranie wszystkie liczby, których suma cyfr jest podzielna przez 3.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

const int wymM=10;
const int wymN=10;

int main() {
    int m, n;
    cout << "Podaj liczbe wierszy m: "; cin >> m;
    cout << "Podaj liczbe kolumn n: "; cin >> n;

    int** tablica = new int*[m];
    for (int i = 0; i < m; i++) {
        tablica[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tablica[i][j] = rand() % 201 + 100;
        }
    }
    cout << "Tablica:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }
        auto sumaCyfr = [](int liczba) {
        int suma = 0;
        while (liczba != 0) {
            suma += liczba % 10;
            liczba /= 10;
        }
        return suma;
    };


    cout<<"Liczby, ktorych suma podzielna jest przez 3:"<<endl;
    for(int i=0; i<m; i++) {
     for (int j=0; j<n; j++){
        int liczba = tablica[i][j];
        if (sumaCyfr(liczba) % 3 == 0){
            cout << liczba << " ";
        }
     }
    }

    for (int i = 0; i < m; i++) {
        delete[] tablica[i];
    }
    delete[] tablica;

    return 0;
}
