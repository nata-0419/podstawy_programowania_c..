/*
3.	Napisz program, który wczytuje nieujemn¹ liczbê ca³kowit¹ n i wypisuje na
wyjœciu wartoœæ 0! + 1! + . . . + n!. Wstaw punkty przerwania w miejscach
wybranych przez siebie, œledŸ wybrane zmienne.

*/

#include <iostream>
using namespace std;

int main() {

int n,a;
int suma = 0;
int silnia=1;

    cout<<"Podaj n: "; cin>>n;

    for (int a=0; a<=n; a++) {
        suma += silnia;
        cout<<a<<"!";
    if (a<n){
        cout<<"+";
    }
    silnia*=(a+1);
}
    cout<<endl;
    cout<<"Suma silni " <<n<<"! rowna jest "<<suma;
}
