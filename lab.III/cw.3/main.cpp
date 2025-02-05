#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int n;
    double x0, y0, r;
    cout << "Podaj liczbe punktow (n): "; cin >> n;
    cout << "Podaj wspolrzedne srodka kola (x0, y0): "; cin >> x0 >> y0;
    cout << "Podaj promien kola (r): "; cin >> r;

    srand(time(0));

    for (int i = 0; i <= n; i++) {
        double x = -5 + (rand() / (RAND_MAX / 10.0));
        double y = -5 + (rand() / (RAND_MAX / 10.0));
        double odleglosc = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
    if (odleglosc <= r) {
            cout << "Punkt (" << x << ", " << y << ") nalezy do kola." << endl;
        }
    }
    return 0;
}
