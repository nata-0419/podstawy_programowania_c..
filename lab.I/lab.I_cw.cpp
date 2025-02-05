#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

//          //cw.1 dzialania na liczbach
//    int a,b,c;
//    system("chcp 1250>>null");
//    cout<<"Wpisz pierwsz¹ liczbê: ";
//    cin>>a;
//    cout<<"Wpisz drug¹ liczbê: ";
//    cin>>b;
//    c=a+b;
//    cout<<"Wynik z dzialania " <<a<<"+"<<b<<"="<<c;


        //cw.2 Dany jest ciąg zakoączony 0. Oblicz jego sumą.
int s,x;
system("chcp 1250>>null");
cout<<"Dany jest ciąg zakoączony 0. Oblicz jego sumą."<<endl;
cout<<"Wprowadź ciąg"<<endl;

s=0;
cout<<"x= ";cin>>x;
while (x!=0){                 //jeœli x bêdzie 0 zamknij program
    s=s+x;
    cout<<"x= ";cin>>x;
    }
cout<<"Wynik to ";
cout<<"s="<<s;


}

