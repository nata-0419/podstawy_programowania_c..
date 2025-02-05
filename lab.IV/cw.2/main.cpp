/*
2.	Char: Dany jest ci�g znak�w zako�czony �*�. Napisz program, kt�ry z podanego ci�gu
    wypisze na monitorze wszystkie podci�gi sk�adaj�ce si� wy��cznie z ma�ych liter.
    Wypisz znalezione podci�gi oraz ich liczb�.
Przyk�ad: <End> axyA-<-to5ale* Wynik: axy, to, ale 3 podci�gi z ma�ych liter ab //dwa zanki
a i b r�nego typu => wtedy nast�puje: (1) �Xa�  pocz�tek podci�gu ma�ych liter i
wtedy zwi�kszamy licznik + wypisujemy kolejne znaki, (2) �xX� koniec, przestajemy wypisywa�

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
