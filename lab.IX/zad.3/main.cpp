/* 3. Napisz program, z wykorzystaniem funkcji, który wype³ni N-elementow¹ tablicê radianów
liczbami rzeczywistymi generowanymi losowo z przedzia³u <0, 2*PI>,
a nastêpnie przeliczy radiany na stopnie. Dane przeka¿ przez zmienne globalne.

*/




#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N=10;
double Rad[N];
double Cel[N];

void genRad(){
    for (int i=0; i<N; i++){
        Rad[i] = (rand() / (double)RAND_MAX) * (2 * 3.14);
    }
}

void generuj(){
    for (int i=0; i<N; i++){
         Cel[i] = Rad[i] * (180.0 / 3.14);
    }
}

void wynik(){
    cout << "Przeliczenie radianow na stopnie celcjusza"<< endl;
    for (int i=0; i<N; i++){
        cout << "Radian= "<< Rad[i] << " => Stopni Celcjusza= " << Cel[i] <<endl;
    }
}

int main()
{
    srand(time(0));
    genRad();
    generuj();
    wynik();

    return 0;
}
