/*
1.	Zdefiniuj przestrzeñ nazw dla operacji arytmetycznych (+,-, *, / i %)
wraz potrzebnymi funkcjami. Wczytywanie danych i wyœwietlanie wyników odbywa siê
za pomoc¹ funkcji z tej przestrzeni nazw. Napisz program, który korzysta z tej przestrzeni nazw.

*/


#include <iostream>

using namespace std;

namespace arytmetyka{

int  dodawanie(int a, int b){
    return a + b;
}

int odejmowanie(int a, int b){
    return a - b;
}

int mnozenie(int a, int b){
    return a * b;
}

int dzielenie(int a, int b){
    if (b == 0) {
        cout << "Nie dzieli sie przez zero";
        return 0;
    } else {
    return a/b;
}}

int reszta(int a, int b){
        if (b == 0) {
        cout << "Nie dzieli sie przez zero";
        return 0;
    } else {
    return a%b;
}}


void dane(int& a, int& b){
    cout <<"Wprowadz liczby" << endl;
    cout <<"a= "; cin >> a ;
    cout <<"b= "; cin >> b;
}

void wynik(const string& operacja, int wynik) {
    cout << "Wynik operacji " << operacja << " wynosi " << wynik << endl ;
}}

int main()
{
int a,b;
arytmetyka::dane(a,b);
    arytmetyka::wynik("dodawanie",arytmetyka::dodawanie(a,b));
    arytmetyka::wynik("odejmowanie", arytmetyka::odejmowanie(a, b));
    arytmetyka::wynik("mnozenie", arytmetyka::mnozenie(a, b));
    arytmetyka::wynik("dzielenie", arytmetyka::dzielenie(a, b));
    arytmetyka::wynik("reszta", arytmetyka::reszta(a, b));


return 0;
}
