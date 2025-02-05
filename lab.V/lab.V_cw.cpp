#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {

//5.	Napisz program, który wczyta liczbę X oraz wyliczy i wyświetli kolejne elementy ciągu Fibonacciego,
//      które nie przekraczają wartości wczytanej zmiennej X.
//      W przypadku, gdy kolejny wyliczony element jest większy od zmiennej X, program powinien zakończyć działanie.
//      Wykorzystaj pętlę while.

float f,g,x,a;
f<=0;
g=1;
cout<<"Wczytaj liczbe a program wyliczy kolejne elementy z ciagu Fibonacciego"<<endl;
cout<<"x="; cin>>x;
cout<<"0,";
while (g<=x) {
    cout<<g<<",";
    a=g;
    g=g+f;
    f=a;
}


//12.	Wylosuj cyfrę z zakresu 0..9 – ma być ona ukryta przed użytkownikiem programu.
//      Spróbuj odgadnąć tą liczbę w trzech próbach.
//      Zakończenie programu powinno wyświetlić komunikat: „PIN poprawny” lub „PIN niepoprawny”. Użyj pętli do … while.


//srand(time(NULL));
//int wylosowana, liczba, a;
//wylosowana = (std::rand()%10);
//liczba=0;
//cout<<"Zostala wylosowana liczba, masz 3 szanse na odgadniecie jej."<<endl;
//cout<<wylosowana<<endl;
//
//do{
//cout<<"Wpisz propozycje: "; cin>>a;
//liczba++;
//if (wylosowana==a)
//        cout<<"Pin poprawny";
//    else
//    cout<<"PIN niepoprawny"<<endl;
//}while (a!=wylosowana && liczba<=2);
//
// return 0;


//13. Dany jest ciąg n-elementowy.
//     Napisz program obliczający wariancję i odchylenie standardowe korzystając z trzech różnych pętli:
//     (1) for, (2) while i (3) do … while.
    // W obliczeniach wykorzystaj wzory:
    // s^2=E(X^2 )-(EX)^2- wariancja;  	s=√(E(X^2 )-(EX)^2 ) - odchylenie standardowe.


//int n;
//float war,a,b,x,odc;
//a=0;
//b=0;
//cout<<"Podaj n: "; cin>>n;
//for (int i=0; i<n; i++){
//    cout<<"Podaj liczby: "; cin>>x;
//    b=b+x*x;
//    a=a+x;
//    }
//war=b/n-(a/n)*(a/n);
//odc=sqrt(war);
//cout<<"Wynik "<<endl;
//cout<<"Wariacja "<<war<<endl;
//cout<<"Odchylenie "<<odc<<endl;



}
