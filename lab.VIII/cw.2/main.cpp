#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj liczbe elementow: "; cin >> n;
    float **tablica = new float*[3];
    for (int i=0; i<3; i++){
        tablica[i] = new float[n];
    }
    float liczba;
    int Id_ujemne=0;
    int Id_parzyste=0;
    int Id_rzeczywiste=0;

    cout << "Podaj " << n << " liczb (maja to byc liczby calkowite lub rzeczywiste): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> liczba;

        if (liczba < 0){
            tablica[0][Id_ujemne++] = liczba;
        }
        else if ((int)liczba == (int)liczba % 2 == 0) {
            tablica[1][Id_parzyste++] = liczba;
        }
        else if (liczba != (liczba<0 && (int)liczba == (int)liczba % 2 == 0)) {
            tablica[2][Id_rzeczywiste++] = liczba;
        }

        }
    cout << "Liczby ujemne: ";
    for (int i = 0; i < Id_ujemne; i++) {
        cout << tablica[0][i] << " ";
    }
    cout << endl;

    cout << "Liczby parzyste: ";
    for (int i = 0; i < Id_parzyste; i++) {
        cout << tablica[1][i] << " ";
    }
    cout << endl;

    cout << "Liczby rzeczywiste: ";
    for (int i = 0; i < Id_rzeczywiste; i++) {
        cout << tablica[2][i] << " ";
    }

    for (int i = 0; i < 3; i++) {
        delete[] tablica[i];
    }
    delete[] tablica;
    return 0;
}
