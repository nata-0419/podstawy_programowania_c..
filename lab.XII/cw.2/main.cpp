#include <iostream>
#include <cmath>

using namespace std;

float sin_rekurencja(float x, float eps = 0.0001, float aa = 0, float sum = 0, int n = 0) {
    if (n == 0) {
        aa = x;
    } else {
        aa *= -x * x / ((2 * n) * (2 * n + 1));
    }
    sum += aa;
    if (fabs(aa) < eps) {
        return sum;
    }
    return sin_rekurencja(x, eps, aa, sum, n + 1);
}

int main() {
    float x;
    cout << "Podaj x, wartosc ta jest w radianach : "; cin >> x;
    float wynik = sin_rekurencja(x);
    cout << "sin(" << x << ") = " << wynik << endl;
    return 0;
}
