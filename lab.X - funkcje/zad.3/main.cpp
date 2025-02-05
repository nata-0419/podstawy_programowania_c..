/*
Napisz funkcję, która dla nieujemnej liczby n, takiej, że 0≤n≤20 wyznaczy dwusilnię.
Uwaga !  Dwusilnię dla dowolnej liczby naturalnej n wyznaczamy według wzoru:

*/

#include <iostream>
using namespace std;


int dwusilnia(int n){
    if(n==1){
        return 0;
    }
int rezultat = 1;
    if (n%2 == 0){
        for (int i=n; i >= 2; i-=2)
            rezultat *=i;
    } else {
        for (int i=n; i >= n; i-=2){
            rezultat *=i;
        }
    }
return rezultat;
}

int wczytaj(){
    int n;
    cout << "Podaj nieujemna liczba n (0 < n < 20): "; cin >> n;
    while (n < 0 || n > 20) {
        cout << "Liczba poza dozwolonym zakresem!"; cin >> n;
    }
    return n;
}

int wysWynik(int n, int wynik){
    cout <<"Dwusilnia dla n= "<<n<<" rowna jest "<<wynik<<endl;
}


int main()
{

int n = wczytaj();
int wynik = dwusilnia(n);
wysWynik(n, wynik);

    return 0;
}
