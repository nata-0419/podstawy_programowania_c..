//zad.3 3.	Napisz program, który wczyta imiê u¿ytkownika i:
    //•	stwierdzi, czy jest on kobiet¹, czy mê¿czyzn¹. Uwaga: Przyjmij, ¿e tylko imiona ¿eñskie koñcz¹ siê na literê ‘a’.

#include <iostream>
#include <cstdlib>

using namespace std;
int main(){

    string s;
    cout<<"Wpisz imie: ";
    cin>>s;

    if (s.back()=='a' || s.back()=='A')
        cout<< s <<" to imie zenskie";
    else
        cout<< s <<" to imie meskie";
}
