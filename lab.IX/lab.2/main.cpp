#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>
using namespace std;

void wypelnij_tablice(int* &tab, int n) {
    tab = new int[n];
    cout << "Podaj liczby calkowite: \n";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
}

void wypisz_tablice(int* tab, int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << "\t";
    }
    cout << endl;
}

int* usun_powtorzenia(int* tab, int &n) {
    unordered_set<int> unique_elements;
    for (int i = 0; i < n; i++) {
        unique_elements.insert(tab[i]);
    }

    n = unique_elements.size();
    int* new_tab = new int[n];
    int index = 0;

    for (auto element : unique_elements) {
        new_tab[index++] = element;
    }

    return new_tab;
}

int main() {
    srand(time(NULL));

    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int* tab = nullptr;

    wypelnij_tablice(tab, n);

    cout << "Elementy tablicy: \n";
    wypisz_tablice(tab, n);

    int* tab_bez_powtorzen = usun_powtorzenia(tab, n);
    cout << "Tablica po usunieciu powtorzen: \n";
    wypisz_tablice(tab_bez_powtorzen, n);

    delete[] tab;
    delete[] tab_bez_powtorzen;

    return 0;
}
