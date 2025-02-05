/*
//zad.1
#include<iostream>
using namespace std;

int NWD(int a, int b)
{
    if(b!=0)
    	return NWD(b,a%b);

    return a;
}

int main()
{
    int a, b;
    cout<<"Podaj liczbe a: "; cin>>a;
    cout<<"Podaj liczbe b: "; cin>>b;

    cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;

    return 0;
}
*/


//zad. 2	Napisz program wyœwietlaj¹cy na ekranie wartoœci funkcji f(x)=1/x w zadanym przedziale [a, b]
//          z krokiem k (tzw. tablicowanie funkcji). Sprawdzaj, czy x nale¿y do dziedziny.

/*
#include <iostream>
#include <iomanip>
using namespace std;

void tablicowanie_funkcji(double a, double b, double k) {
    if (k <= 0) {
        return;
    }

    for (double x = a; x <= b; x += k) {
        if (x == 0) {
            cout << "f("<<x<<") = "<< "nie moze byc zerem." << endl;
        } else {
            double f_x = 1 / x;
            cout << fixed << setprecision(1) << "f(" << x << ") = " << f_x << endl;
        }
    }
}
int main() {
    double a, b, k;
    cout << "Podaj poczatek przedzialu a: "; cin >> a;
    cout << "Podaj koniec przedzialu b: "; cin >> b;
    cout << "Podaj krok k: "; cin >> k;

    tablicowanie_funkcji(a, b, k);

    return 0;
}

*/


//zad.3 3.	Napisz program, który wczytuje liczbê n i wypisuje na ekran wszystkie trojki pitagorejskie
//          (tj. trojki liczb ca³kowitych a, b, c takich, ¿e a2 +b2 = c2), sk³adaj¹ce siê z liczb mniejszych od n
#include <iostream>
using namespace std;

int main() {
    cout << "Podaj: ";
    int a, b, c, n;
    cin >> n;
    a = 0;
    b = 0;
    c = 0;

    for (a = 1; a<n; a++)
        for (b = 1; b<n; b++)
            for (c = 1; c<n; c++)
                if ( (a*a) + (b*b) == (c*c))
                {
                    {
                        cout << a << " " << b << " " << c << endl;
                    }
                }
    return 0;
}









