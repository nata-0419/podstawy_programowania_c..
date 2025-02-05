/*
2.	Char: Dany jest ci¹g znaków zakoñczony „*”. Napisz program, który z podanego ci¹gu
    wypisze na monitorze wszystkie podci¹gi sk³adaj¹ce siê wy³¹cznie z ma³ych liter.
    Wypisz znalezione podci¹gi oraz ich liczbê.
Przyk³ad: <End> axyA-<-to5ale* Wynik: axy, to, ale 3 podci¹gi z ma³ych liter ab //dwa zanki
a i b ró¿nego typu => wtedy nastêpuje: (1) „Xa”  pocz¹tek podci¹gu ma³ych liter i
wtedy zwiêkszamy licznik + wypisujemy kolejne znaki, (2) „xX” koniec, przestajemy wypisywaæ

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string ciag;
    cout << "Podaj ciag znakow zakonczony '*': ";
    getline(cin, ciag);

    if (!ciag.empty() && ciag[ciag.size() - 1] == '*') {
        ciag = ciag.substr(0, ciag.size() - 1);
    }

    string podciag = "";
    int liczPodciagi = 0;
    for (int i = 0; i < ciag.size(); i++) {
        char c = ciag[i];

    if (c >= 'a' && c <= 'z') {
            podciag += c;
        } else {
            if (podciag.size() > 0) {
                cout << podciag << endl;
                ++liczPodciagi;
                podciag = "";
            }
        }
    }
    if (podciag.size() > 0) {
        cout << podciag << endl;
        ++liczPodciagi;
    }
    cout << "Liczba podciagow: " << liczPodciagi << endl;

    return 0;
}
