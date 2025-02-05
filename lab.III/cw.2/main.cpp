/*
2.	Dany jest ci�g liczb rzeczywistych zako�czony zerem. Napisz program, kt�ry wypisze te liczby,
    kt�rych ostatnia cyfra w cz�ci ca�kowitej jest taka sama jak pierwsza cyfra w cz�ci u�amkowej.
    Np. 1234.43 spe�nia warunki, liczba 1234.1234 nie spe�nia
*/

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    double liczba;
//    cout << "Wypisz liczby rzerzywiste: ";
//
//    while (cin>>liczba && liczba !=0) {
//            int Cal = (int)liczba;
//            double Ul = liczba - Cal;
//            int OstCyfCal = abs(Cal%10);
//            int PieCyfUl = (int)(Ul *10);
//    if (OstCyfCal == abs(PieCyfUl)){
//        cout << liczba <<endl;
//    }
//    }
//    return 0;
//}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double liczba;
    cout << "Wypisz liczby rzeczywiste (zako�czone zerem): ";

    while (cin >> liczba && liczba != 0) {
        // Oddzielamy cz�� ca�kowit� i u�amkow�
        int Cal = (int)liczba;  // Cz�� ca�kowita
        double Ul = liczba - Cal;  // Cz�� u�amkowa

        // Ostatnia cyfra w cz�ci ca�kowitej
        int OstCyfCal = abs(Cal) % 10;

        // Pierwsza cyfra w cz�ci u�amkowej (pomno�enie przez 10 i rzutowanie na int)
        int PieCyfUl = (int)(Ul * 10);

        // Sprawdzamy, czy ostatnia cyfra cz�ci ca�kowitej jest taka sama jak pierwsza cyfra cz�ci u�amkowej
        if (OstCyfCal == abs(PieCyfUl)) {
            cout << liczba << endl;  // Wypisujemy liczb�, je�li warunek jest spe�niony
        }
    }

    return 0;
}
