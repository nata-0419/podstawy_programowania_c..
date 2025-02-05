/*
1.	Dany jest ci�g liczb ca�kowitych dodatnich zako�czony zerem. Napisz program,
    kt�ry sprawdzi czy podany ci�g liczb jest uporz�dkowany, nierosn�co lub niemalej�co.

*/

#include <iostream>
using namespace std;

int main() {
    int liczba, poprzednia;
    bool niemalejacy=true, nierosnacy=true;

    cout << "Podaj ciag liczb calkowitych dodatnich zakonczony zerem:" << endl;
    cin >> poprzednia;
    if (poprzednia == 0) {
        cout << "Ciag jest pusty." << endl;
        return 0;
    }
    while (cin >> liczba) {
        if (liczba == 0){
            break;
        }
        if (liczba < poprzednia) {
            niemalejacy = false;
        }
        if (liczba > poprzednia) {
            nierosnacy = false;
        }
        poprzednia = liczba;
    }
    if (niemalejacy) {
        cout << "Ciag jest niemalejaacy." << endl;
    } else if (nierosnacy) {
        cout << "Ciag jest nierosnacy." << endl;
    } else {
        cout << "Ciag nie jest ani niemalejacy, ani nierosnacy." << endl;
    }

    return 0;
}

