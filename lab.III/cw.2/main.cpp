/*
2.	Dany jest ci¹g liczb rzeczywistych zakoñczony zerem. Napisz program, który wypisze te liczby,
    których ostatnia cyfra w czêœci ca³kowitej jest taka sama jak pierwsza cyfra w czêœci u³amkowej.
    Np. 1234.43 spe³nia warunki, liczba 1234.1234 nie spe³nia
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
    cout << "Wypisz liczby rzeczywiste (zakoñczone zerem): ";

    while (cin >> liczba && liczba != 0) {
        // Oddzielamy czêœæ ca³kowit¹ i u³amkow¹
        int Cal = (int)liczba;  // Czêœæ ca³kowita
        double Ul = liczba - Cal;  // Czêœæ u³amkowa

        // Ostatnia cyfra w czêœci ca³kowitej
        int OstCyfCal = abs(Cal) % 10;

        // Pierwsza cyfra w czêœci u³amkowej (pomno¿enie przez 10 i rzutowanie na int)
        int PieCyfUl = (int)(Ul * 10);

        // Sprawdzamy, czy ostatnia cyfra czêœci ca³kowitej jest taka sama jak pierwsza cyfra czêœci u³amkowej
        if (OstCyfCal == abs(PieCyfUl)) {
            cout << liczba << endl;  // Wypisujemy liczbê, jeœli warunek jest spe³niony
        }
    }

    return 0;
}
