/* 4.	U¿ywaj¹c tablicy dynamicznej napisz program dodaj¹cy element na jej koñcu lub usuwaj¹cy.
    Wyboru dokonuje u¿ytkownik w czasie dzia³ania programu. Wyœwietl tablicê przed i po operacji.


    W tym przypadku * jest używane w deklaracji zmiennej, aby określić, że zmienna tablica jest
wskaźnikiem na int (czyli wskaźnik na zmienną typu int). int* tablica oznacza: "tablica jest wskaźnikiem na zmienną typu int".
Wartość tego wskaźnika może być adresem w pamięci, w którym przechowywane są dane typu int.
    W tym przypadku *nowaTablica oznacza dostęp do wartości, na którą wskazuje wskaźnik nowaTablica.
Zatem zapis *nowaTablica = tablica[i] oznacza przypisanie wartości tablica[i] do miejsca w
pamięci, na które wskazuje wskaźnik nowaTablica.
    W tym przypadku: new int[rozmiar + 1] alokuje dynamicznie tablicę typu int o rozmiarze rozmiar + 1.
nowaTablica jest wskaźnikiem, który przechowuje adres pierwszego elementu tej nowo utworzonej tablicy.
*/


#include <iostream>
using namespace std;

int main() {
    int* tablica = 0;
    int rozmiar = 0;
    int wybor;

    do {
        cout << "1. Dodaj element\n";
        cout << "2. Usun element\n";
        cout << "3. Wyswietl tablice\n";
        cout << "Wybierz operacje: ";
        cin >> wybor;

        if (wybor == 1) {
            double nowyElement;
            cout << "Podaj wartosc do dodania: ";
            cin >> nowyElement;
            int* nowaTablica = new int[rozmiar + 1];
            for (int i = 0; i < rozmiar; i++) {
                nowaTablica[i] = tablica[i];
            }
            nowaTablica[rozmiar] = nowyElement;
            delete[] tablica;
            tablica = nowaTablica;
            rozmiar++;
            cout << "Tablica po dodaniu elementu: ";
            for (int i = 0; i < rozmiar; i++) {
                cout << tablica[i] << " ";
            }
            cout << endl;

        } else if (wybor == 2) {
            if (rozmiar == 0) {
                cout << "Tablica jest pusta, nic do usuniecia!" << endl;
            } else {
                int* nowaTablica = new int[rozmiar - 1];
                for (int i = 0; i < rozmiar - 1; i++) {
                    nowaTablica[i] = tablica[i];
                }
                delete[] tablica;
                tablica = nowaTablica;
                rozmiar--;
                cout << "Tablica po usunieciu elementu: ";
                for (int i = 0; i < rozmiar; i++) {
                    cout << tablica[i] << " ";
                }
                cout << endl;
            }

        } else if (wybor == 3) {
            if (rozmiar == 0) {
                cout << "Tablica jest pusta!" << endl;
            } else {
                cout << "Tablica: ";
                for (int i = 0; i < rozmiar; i++) {
                    cout << tablica[i] << " ";
                }
                cout << endl;
            }
        }

    } while (wybor != 4);
    delete[] tablica;
    cout << "Koñczenie programu..." << endl;

    return 0;
}

