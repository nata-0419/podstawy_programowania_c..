#include <iostream>
#include <fstream>

using namespace std;

struct Pracownik {
    char nazwisko[50];
    char adres[100];
    char stanowisko[50];
    float brutto;
};

int main() {
    Pracownik pracownicy[3] = {
        {"Kowalski", "Warszawa, ul. Kwiatowa 10", "Programista", 5000.50},
        {"Nowak", "Krak�w, ul. Wiatraczna 5", "Kierownik", 7500.00},
        {"Wi�niewski", "Gda�sk, ul. Morska 15", "Programista", 5200.00}
        {"Gut", "Warszawa, ul. Pokolorowana 25", "Pracownik", 4000}
    };

    ofstream plikBinar("pracownicy.dat", ios::binary);
    if (!plikBinar) {
        cerr << "Nie udalo si� otworzyc pliku binarnego!" << endl;
        return 1;
    }

    plikBinar.write(reinterpret_cast<char*>(pracownicy), sizeof(Pracownik) * 3);
    plikBinar.close();

    cout << "Dane zapisane do pliku binarnego." << endl;

    return 0;
}
