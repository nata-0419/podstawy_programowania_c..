/*
1.	Zdefiniuj struktur� do przechowywania danych o wektorach na p�aszczy�nie:
nazwa np. AB
wsp�rz�dne  x,y punktu pocz�tkowego
wsp�rz�dne x,y punktu ko�cowego
Wprowad� dane do tablicy wektor�w. Napisz program, kt�ry
a.	obliczy d�ugo�ci wektor�w ,
b.	poda nazw� wektora o najwi�kszej d�ugo�ci.,
c.	sprawdzi czy w tablicy s� dane o wektorach o tej samej d�ugo�ci



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
cout << "Wektor o najwi�kszej dlugosci to " << maxN << endl;
    if (rowne) {
    cout << "W tablicy sa wektory o tej samej dlugosci." << endl;
    } else {
    cout << "W tablicy nie ma wektorow o tej samej dlugosci." << endl;
    }

    return 0;
}
