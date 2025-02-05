#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rozmiar_tablicy(){
    return rand() % 15 + 10;
}

void wypelnij_tablice(int tablica[], int n, int index = 0){
    if (index == n){
        return;
    }
        tablica[index] = rand() % 100 + 1;
        wypelnij_tablice(tablica, n, index + 1);
}


void wyswietl_tablice(int tablica[], int n, int index = 0){
    if (index == n){
        cout << endl;
        return;
    }
    cout << tablica[index] << "; ";
    wyswietl_tablice(tablica, n, index + 1);
}

void tablica_rekurencji(int tablica[], int n, int id){
    if (id < 0){
        return;
    }
    if (tablica[id]% -3 == 0 || tablica[id]% -4 == 0 ){
        cout << tablica[id] << "; ";
    }
    tablica_rekurencji(tablica, n, id - 1);
}


int main()
{
    srand(time(0));
    int n = rozmiar_tablicy();
        cout << "Liczba elementow tablicy: " << n << endl;
    int tablica[n];
    wypelnij_tablice(tablica, n);
        cout << "Moja tablica na wartosci: ";
    wyswietl_tablice(tablica, n);
    cout<< "Elementy podzielne przez -3 i -4 oraz w odwrotnej kolejnoœci";
    tablica_rekurencji(tablica, n, n-1);
    return 0;
}
