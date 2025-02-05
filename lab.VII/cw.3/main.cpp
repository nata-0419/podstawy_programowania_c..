#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct pociag {
    char miasto_doc[30];
    int dlugosc_tr;
    float godz_odjazdu;
    char rodzaj_pociagu; //('o' - osobowy, 'p' - pospieszny, 'e' - ekspres)
};

int main() {

    pociag tablica[100];
    int nr_pociagu = 0;
    int wybor;

    cout << "Wprowadz dane o pociagach. Wpisz '0' w celu zakonczenia." << endl;
    while (nr_pociagu < 100) {
        cout << "Podaj miasto docelowe: ";
        cin >> tablica[nr_pociagu].miasto_doc;

    if (tablica[nr_pociagu].miasto_doc[0] == '0') break;
        cout << "Podaj dlugosc trasy: "; cin >> tablica[nr_pociagu].dlugosc_tr;
        cout << "Podaj godzine odjazdu: "; cin >> tablica[nr_pociagu].godz_odjazdu;
        cout << "Podaj rodzaj pociagu (o - osobowy, p - pospieszny, e - ekspres): "; cin >> tablica[nr_pociagu].rodzaj_pociagu;
        nr_pociagu++;
    } do {
        cout << "\nWybierz opcje:" << endl;
        cout << "1. Wypisz pociagi odjezdzajace po zadanej godzinie" << endl;
        cout << "2. Wypisz pociagi pospieszne jadace do zadanego miasta" << endl;
        cout << "3. Wypisz pociagi o najdluzszej trasie" << endl;
        cout << "4. zakoncz program" << endl;
        cout << "Wybor: "; cin >> wybor;

    switch (wybor) {
        case 1: {
                float czas;
                cout << "Podaj godzine: ";
                cin >> czas;
                cout << "Pociagi odjezdzajace po godzinie " << czas << ":" << endl;
                for (int i = 0; i < nr_pociagu; i++) {
                    if (tablica[i].godz_odjazdu > czas) {
                        cout << "Miasto: " << tablica[i].miasto_doc
                             << ", Dlugosc trasy: " << tablica[i].dlugosc_tr
                             << ", Godzina odjazdu: " << fixed << setprecision(2) << tablica[i].godz_odjazdu
                             << ", Rodzaj: " << tablica[i].rodzaj_pociagu << endl;
                    }
                }
                break;
            }
        case 2: {
            char miasto[30];
                cout << "Podaj miasto: ";
                cin >> miasto;

                cout << "Pociagi pospieszne jadace do miasta " << miasto << ":" << endl;
                for (int i = 0; i < nr_pociagu; i++) {
                    if (tablica[i].rodzaj_pociagu == 'p' && strcmp(tablica[i].miasto_doc, miasto) == 0) {
                        cout << "Miasto: " << tablica[i].miasto_doc
                             << ", Dlugosc trasy: " << tablica[i].dlugosc_tr
                             << ", Godzina odjazdu: " << fixed << setprecision(2) << tablica[i].godz_odjazdu
                             << ", Rodzaj: " << tablica[i].rodzaj_pociagu << endl;
                    }
                }
                break;
            }
        case 3: {
                int maxdl = 0;
                for (int i = 0; i < nr_pociagu; i++) {
                    if (tablica[i].dlugosc_tr > maxdl) {
                        maxdl = tablica[i].dlugosc_tr;
                    }
                }
                cout << "Pociagi o najdluzszej trasie (" << maxdl << " km):" << endl;
                for (int i = 0; i < nr_pociagu; i++) {
                    if (tablica[i].dlugosc_tr == maxdl) {
                        cout << "Miasto: " << tablica[i].miasto_doc
                             << ", Dlugosc trasy: " << tablica[i].dlugosc_tr
                             << ", Godzina odjazdu: " << fixed << setprecision(2) << tablica[i].godz_odjazdu
                             << ", Rodzaj: " << tablica[i].rodzaj_pociagu << endl;
                    }
                }
                break;
            }
        case 4:
                cout << "Zakonczono program." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor!" << endl;
                break;
        }
    } while (wybor != 4);

    return 0;
}
