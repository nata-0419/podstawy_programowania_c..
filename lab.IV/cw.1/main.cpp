/*
1.	Napisz program wczytuj�cy kolejne znaki z klawiatury a� do momentu naci�ni�cia klawisza '0'.
    Na zako�czenie zostanie wy�wietlona informacja jakich znak�w by�o wi�cej liter, cyfr czy innych znak�w

*/


#include<iostream>
#include<string>
#include <conio.h>
using namespace std;

int main() {
    char znak;
    int liczbaLiter = 0, liczbaCyfr = 0, liczbaInnych = 0;

    cout << "Wpisuj znaki:" << endl;
    while (true) {
        znak=getch();
        cout<<znak<<endl;
        if (znak == '0') {
            break;
        }
    if ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z')) {
            liczbaLiter++;
        } else if (znak >= '0' && znak <= '9') {
            liczbaCyfr++;
        } else {
            liczbaInnych++;
        }
    }
    cout << "Liczba liter: " << liczbaLiter << endl;
    cout << "Liczba cyfr: " << liczbaCyfr << endl;
    cout << "Liczba innych znakow: " << liczbaInnych << endl;
if (liczbaLiter > liczbaCyfr && liczbaLiter > liczbaInnych) {
    cout << "Wiecej bylo liter." << endl;
    } else if (liczbaCyfr > liczbaLiter && liczbaCyfr > liczbaInnych) {
        cout << "Wiecej bylo cyfr." << endl;
    } else if (liczbaInnych > liczbaLiter && liczbaInnych > liczbaCyfr) {
        cout << "Wiecej bylo innych znakow." << endl;
    } else {
        cout << "Bylo rowna ilosc liter, cyfr i innych znakow." << endl;
    }

    return 0;
}
