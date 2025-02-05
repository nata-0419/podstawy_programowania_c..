/*
7.	Dane s¹ dwa wektory liczb rzeczywistych o wymiarze N.
Napisz program, który oblicza iloczyn skalarny. Jeœli iloczynu
skalarnego nie mo¿na obliczyæ (np. N<=0), zwróæ -1 oraz 1 w
przeciwnym razie.

*/

#include <iostream>

using namespace std;

float iloczynSkalarny(float A[], float B[], int N) {
    float wynik = 0;
    for (int i = 0; i < N; ++i) {
        wynik += A[i] * B[i];
    }
    return wynik;
}

int wczytajWymiar() {
    int N;
    cout << "Podaj wymiar wektora N: ";
    cin >> N;

    if (N <= 0) {
        cout << "-1\n";
        return 1;
    }
    return N;
}

void wczytajWektory(float A[], float B[], int N) {
    cout << "Wektor A:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << "Wektor B:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
}

void wyswietlWynik(float wynik) {
    cout << "Iloczyn skalarny wektorów A i B: " << wynik << endl;
}

int main() {
    int N = wczytajWymiar();

    float A[N], B[N];
    wczytajWektory(A, B, N);
    float wynik = iloczynSkalarny(A, B, N);
    wyswietlWynik(wynik);

    return 0;
}

