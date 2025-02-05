/*
5.	Dany jest ci¹g n-elementowy liczb rzeczywistych losowych z przedzia³u <2,18).
Napisz program obliczaj¹cy iloczyn elementów dla tego ci¹gu. Wypisz dane i wyniki,
u¿yj formatu z dwoma cyframi po kropce. U¿yj rekurencji

*/

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void generujliczby(int n, float tab[], int index) {
    if (index == n) {
        return;
    }
    tab[index] = (rand() / (RAND_MAX / (18.0 - 2.0)));
    cout << fixed << setprecision(2) << tab[index] << " ";
    generujliczby(n, tab, index + 1);
}

float iloczyn(float tab[], int n) {
    if (n == 0) {
        return 1.0;
    }
    return tab[n - 1] * iloczyn(tab, n - 1);
}

int main() {
    int n;
    cout << "Podaj liczbe elementow: "; cin >> n;
    float* tab = new float[n];
    srand(time(0));

    cout << "Wygenerowany ciag liczb losowych: " << endl;
    generujliczby(n, tab, 0);

    float wynik = iloczyn(tab, n);

    cout <<endl<<"Iloczyn elementow ciagu: " << setprecision(2) << wynik << endl;

    return 0;
}
