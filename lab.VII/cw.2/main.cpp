/*
2.	Dana jest jednowymiarowa n-elementowa tablica punktów 2D.
Napisz program, który wypisze 1, gdy nie ma punktów wspó³liniowych i 0, gdy s¹.

*/

#include <iostream>

using namespace std;

struct punkt {
double x, y;
};

int main()
{
    int n;
    cout << " Podaj ilosc punktow: "; cin >> n;

    if (n < 2) {
        cout << "1" << endl;
        return 0;
    }
    punkt punkty[n];            // !!!!!!
    cout << "Podaj wspolrzedne punktow: " <<endl;
    for (int i=0; i<n; i++) {
        cout << "Punkty (x,y) " << i+1 << ": ";
        cin >> punkty[i].x >> punkty[i].y;
    }
    double dx1 = punkty[1].x - punkty[0].x;
    double dy1 = punkty[1].y - punkty[0].y;

    for (int i = 2; i < n; ++i) {
        double dx2 = punkty[i].x - punkty[0].x;
        double dy2 = punkty[i].y - punkty[0].y;

        if (dx1 * dy2 != dy1 * dx2) {
            cout << "1" << endl;
            return 0;
        }
            cout << "0" << endl;
    }
    return 0;
}
