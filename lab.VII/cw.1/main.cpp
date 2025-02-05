/*
1.	Zdefiniuj strukturê do przechowywania danych o wektorach na p³aszczyŸnie:
nazwa np. AB
wspó³rzêdne  x,y punktu pocz¹tkowego
wspó³rzêdne x,y punktu koñcowego
WprowadŸ dane do tablicy wektorów. Napisz program, który
a.	obliczy d³ugoœci wektorów ,
b.	poda nazwê wektora o najwiêkszej d³ugoœci.,
c.	sprawdzi czy w tablicy s¹ dane o wektorach o tej samej d³ugoœci



*/



#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct wektor {
    string nazwa;
    double x1, y1;
    double x2, y2;
    double dlugosc() const {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};


int main(){
    int a;
    cout << "Podaj ile chcesz wektorow: "; cin>>a;
    wektor wektory[a];

      for (int i = 0; i < a; ++i) {
        cout << "Wektor " << i + 1 << ":\n";
        cout << "Podaj nazwe wektora: ";
        cin >> wektory[i].nazwa;
        cout << "Podaj wspolrzedne punktu poczatkowego (x1, y1): ";
        cin >> wektory[i].x1 >> wektory[i].y1;
        cout << "Podaj wspolrzedne punktu koncowego (x2, y2): ";
        cin >> wektory[i].x2 >> wektory[i].y2;
    }

    double maxD = 0;
    string maxN;
    bool rowne = false;

    for (int i=0; i<a; i++) {
        double dlugosc = wektory[i].dlugosc();
        cout << "Dlugosc wektora wynosi " << dlugosc <<endl;

        if (dlugosc > maxD){
            maxD = dlugosc;
            maxN = wektory[1].nazwa;
        }
        for (int j=i+1; j<a; j++) {
            if (abs(dlugosc - wektory[j].dlugosc())< 1e-6){
                rowne= true;
            }
        }
    }
cout << "Wektor o najwiêkszej dlugosci to " << maxN << endl;
    if (rowne) {
    cout << "W tablicy sa wektory o tej samej dlugosci." << endl;
    } else {
    cout << "W tablicy nie ma wektorow o tej samej dlugosci." << endl;
    }

    return 0;
}
