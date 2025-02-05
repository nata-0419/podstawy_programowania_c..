#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcja rekurencyjna do wypelniania lewej dolnej czesci tablicy
void wypelnijLewaDolnaCzesc(double (&tablica)[100][100], int N, int i, int j) {
    // Warunek zakonczzenia rekurencji
    if (i >= N) return;

    // Wypelnianie lewej dolnej czesci
    if (j <= i) {
        tablica[i][j] = static_cast<double>(rand()) / RAND_MAX * 100.0;
    }

    // Przechodzenie do kolejnego elementu
    if (j < i) {
        wypelnijLewaDolnaCzesc(tablica, N, i, j + 1);  // Przechodzimy do kolejnej kolumny w tym samym wierszu
    } else {
        wypelnijLewaDolnaCzesc(tablica, N, i + 1, 0);  // Przechodzimy do kolejnego wiersza
    }
}

// Funkcja rekurencyjna do kopiowania wartosci z lewej dolnej do prawej gornej czesci
void przekopiujDoPrawejGornej(double (&tablica)[100][100], int N, int i, int j) {
    // Warunek zakonczzenia rekurencji
    if (i >= N / 2) return;

    // Kopiowanie wartosci
    if (j >= i) {
        tablica[i][j] = tablica[N - 1 - i][N - 1 - j];
    }

    // Przechodzenie do kolejnego elementu
    if (j < N - 1) {
        przekopiujDoPrawejGornej(tablica, N, i, j + 1);  // Przechodzimy do kolejnej kolumny w tym samym wierszu
    } else {
        przekopiujDoPrawejGornej(tablica, N, i + 1, 0);  // Przechodzimy do kolejnego wiersza
    }
}

// Funkcja do wypisania tablicy
void wypiszTablice(double (&tablica)[100][100], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;

    // Wczytanie rozmiaru tablicy
    cout << "Podaj rozmiar tablicy NxN: ";
    cin >> N;

    // Tworzenie tablicy dwuwymiarowej o stalej maksymalnej wielkosci
    double tablica[100][100];  // Maksymalny rozmiar tablicy to 100x100

    // Inicjalizacja generatora liczb losowych
    srand(static_cast<unsigned int>(time(0)));

    // Wypelnienie lewej dolnej czesci tablicy
    wypelnijLewaDolnaCzesc(tablica, N, 0, 0);

    // Przekopiowanie wartosci do prawej gornej czesci tablicy
    przekopiujDoPrawejGornej(tablica, N, 0, 0);

    // Wypisanie wynikowej tablicy
    cout << "Tablica po modyfikacjach: " << endl;
    wypiszTablice(tablica, N);

    return 0;
}
