#include <iostream>
using namespace std;

int main() {
    int rozmiar=10;

    cout << "Podaj liczbe elementow w tablicy: "; cin >> rozmiar;

    int* tablica = new int[rozmiar];

    cout << "Podaj " << rozmiar << " elementow tablicy: " << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << "Element " << i + 1 << ": "; cin >> tablica[i];
    }

    cout << "Poczatkowa tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }

    int nowyElement = 0;
    cout << "Podaj element do dodania na poczatek: "; cin >> nowyElement;
    int* nowaTablica = new int[rozmiar + 1];
    nowaTablica[0] = nowyElement;
    for (int i = 0; i < rozmiar; i++) {
        nowaTablica[i + 1] = tablica[i];
    }
    delete[] tablica;
    tablica = nowaTablica;
    rozmiar++;
        for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int szukanyElement = 0;
    int elementDoWstawienia = 0;
    cout << "Podaj element, za ktorym chcesz wstawic nowy element: "; cin >> szukanyElement;
    cout << "Podaj element do wstawienia: "; cin >> elementDoWstawienia;

    int indeks = -1;
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i] == szukanyElement) {
            indeks = i;
            break;
        }
    }

    if (indeks == -1) {
        cout << "Element " << szukanyElement << " nie zostal znaleziony!" << endl;
    } else {
        nowaTablica = new int[rozmiar + 1];
        for (int i = 0; i <= indeks; i++) {
            nowaTablica[i] = tablica[i];
        }
        nowaTablica[indeks + 1] = elementDoWstawienia;
        for (int i = indeks + 1; i < rozmiar; i++) {
            nowaTablica[i + 1] = tablica[i];
        }
        delete[] tablica;
        tablica = nowaTablica;
        rozmiar++;
        for (int i = 0; i < rozmiar; i++) {
            cout << tablica[i] << " ";
        }
        cout << endl;
    }

    int pozycjaDoUsuniecia = 0;
    cout << "Podaj pozycje elementu do usuniecia (indeks 0 do " << rozmiar - 1 << "): ";
    cin >> pozycjaDoUsuniecia;

    if (pozycjaDoUsuniecia < 0 || pozycjaDoUsuniecia >= rozmiar) {
        cout << "Niepoprawna pozycja!" << endl;
    } else {
        nowaTablica = new int[rozmiar - 1];
        for (int i = 0; i < pozycjaDoUsuniecia; i++) {
            nowaTablica[i] = tablica[i];
        }
        for (int i = pozycjaDoUsuniecia + 1; i < rozmiar; i++) {
            nowaTablica[i - 1] = tablica[i];
        }
        delete[] tablica;
        tablica = nowaTablica;
        rozmiar--;
        cout << "Po usunieciu elementu na pozycji " << pozycjaDoUsuniecia << ": ";
        for (int i = 0; i < rozmiar; i++) {
            cout << tablica[i] << " ";
        }
    }
    delete[] tablica;
    return 0;
}
