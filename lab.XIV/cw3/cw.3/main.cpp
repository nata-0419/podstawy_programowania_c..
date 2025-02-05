//3.	Napisz program tworz¹cy plik binarny losowe.dat wype³niony ca³kowitymi liczbami losowymi z zadanego przedzia³u [a, b].

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool wczytaj (int& a, int& b, int& c) {
    cout << "Podaj poczatek przedzialu: "; cin >> a;
    cout << "Podaj koniec przedzialu: "; cin >> b;
    cout << "Podaj ile chcesz liczba z tego zakresu: "; cin >> c;
}

void zapisz_liczby (const string& nazwa_pliku, int a, int b, int c){
    ofstream plikBinarny (nazwa_pliku, ios::binary);
    if (!plikBinarny) {
        cout << "Nie udalo sie otworzyc pliku " << nazwa_pliku << "!" << endl;
        return;
    }
    for (int i = 0; i < c; ++i) {
        int liczba = a + rand() % (b - a + 1);
        plikBinarny.write(reinterpret_cast<char*>(&liczba), sizeof(liczba));
    }
    plikBinarny.close();
    cout << "Liczby zostaly zapisane do pliku " << nazwa_pliku << "." << endl;
}

int main()
{
    int a, b, c;
    wczytaj(a, b, c);
    srand(static_cast<unsigned int>(time(0)));
    zapisz_liczby("losowe.dat", a, b, c);
    return 0;
}
