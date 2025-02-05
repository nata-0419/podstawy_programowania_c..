//1.	Zdefiniuj klasê Punkt o sk³adowych prywatnych x,y i metodach: konstruktor bezargumentowy,
//konstruktor z argumentami, metody wypisz, przesun – przesuwa punkt o podany wektor, oblicz odleg³oœæ-
//oblicza odleg³oœæ miêdzy dwoma punktami. Napisz program, w którym utworzysz 2 punkty P1 –
//z u¿yciem konstruktora bez argumentów argumentów P2 – konstruktora z argumentami, dla których sprawdzisz dzia³anie metod klasy.


#include <iostream>
#include <cmath>

using namespace std;

class Punkt {
    private:
        double x,y;
    public:
        Punkt(): x(0), y(0) {};
        Punkt(double x_val, double y_val) : x(x_val), y(y_val) {}
    void wypisz() const {
        cout << "Punkt: (" << x << ", " << y << ")" <<endl;
    }
    void przesun(double dx, double dy) {
        x += dx;
        y += dy;
    }
    double obliczOdleglosc(const Punkt& p2) const {
        return sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));
    }
};

int main() {
    Punkt P1(4, 4);
    Punkt P2(3, 4);

    cout << "Punkty przed przesunieciem:" <<endl;
    P1.wypisz();
    P2.wypisz();

    P1.przesun(1, 2);
    P2.przesun(-1, -2);

    cout << "Punkty po przesunieciu:" << endl;
    P1.wypisz();
    P2.wypisz();

    double odleglosc = P1.obliczOdleglosc(P2);
    cout << "Odleglosc miedzy punktami P1 i P2: " << odleglosc <<endl;

    return 0;
}
