//1.	Zdefiniuj klasê wektor o sk³adowych prywatnych a, b, c i metodach: konstruktor bezargumentowy,
//konstruktor z argumentami, metody wypisz, d³ugoœæ, iloczyn skalarny, iloczyn wektorowy. Napisz program,
//w którym utworzysz 2 wektory W1 – z u¿yciem konstruktora bez argumentów argumentów W2 – konstruktora z argumentami,
// dla których sprawdzisz dzia³anie metod klasy.

#include <iostream>
#include <cmath>

using namespace std;

class wektor {
    private:
        double a, b, c;

    public:
        wektor(): a(0), b(0), c(0) {}
        wektor(double a, double b, double c) : a(a), b(b), c(c) {}

    void wypisz() const {
        cout << "wektor: (" << a << ", " << b << ", " << c <<")" <<endl;
    }

    double dlugosc() const {
        return sqrt(a*a + b*b + c*c);
    }

    double iloczynSkalarny( const wektor& w) const{
        return a*w.a + b*w.b + c*w.c;
    }

    wektor iloczynWektorowy(const wektor& w) const{
        double nx = b*w.c - c*w.b;
        double ny = c*w.a - a*w.c;
        double nz = a*w.b - b*w.a;
        return wektor(nx, ny, nz);
    }
};

int main() {
    wektor w1(3,2,2);
    wektor w2(5.0, 2.0, 4.0);

    cout << "wektor w1: " << endl;
    w1.wypisz();
    cout << "wekotr w2: " << endl;
    w2.wypisz();

    cout << "Dlugosc wektora w1:" << w1.dlugosc() << endl ;
    cout << "Dlugosc wektora w2:" << w2.dlugosc() << endl ;

    cout << "iloczyn skalarny: " << w1.iloczynSkalarny(w2) << endl;
    wektor w3 = w1.iloczynWektorowy(w2);
    cout << "iloczyn wektorowy: " ;
    w3.wypisz();

    return 0;
}
