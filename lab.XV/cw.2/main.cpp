//2.	Zdefiniuj klasê Firma o prywatnych sk³adowych: nazwa, produkt, wartoœæ produktu, tablica kooperantów,
//którzy wspomagaj¹ wytwarzanie danego produktu – max 5, konstruktor z argumentami:
//nazwa, produkt, tablica firm kooperuj¹cych oraz inne metody niezbêdne do  napisania  programu, który:
//pobiera dane od u¿ytkownika i tworzy tablicê n – firm, sprawdza, czy w tablicy s¹ dane o firmie o podanej nazwie,
//wypisuje dane firm, oblicza œredni¹ wartoœæ produktu i oblicza w ilu produktach wystêpowa³ kooperant o podanej nazwie.



#include <iostream>
#include <cmath>

using namespace std;

class Firma {
    private:
        string nazwa;
        string produkt;
        int cena;

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
