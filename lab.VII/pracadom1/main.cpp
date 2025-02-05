#include <iostream>
using namespace std;

struct osoba{
	   char imie[20];
	   char nazwisko[30];
	   int rok_urodzenia;
};
int main()
{
osoba a;
cout<<"Podaj imie=";cin>>a.imie;
cout<<"Podaj nazwisko=";cin>>a.nazwisko;
cout<<"Podaj rok urodzenia=";cin>>a. rok_urodzenia;

cout<<"wczytane dane:\n";
cout<<"imie=";	cout<<a.imie<<endl;
cout<<"nazwisko=";	cout<<a.nazwisko<<endl;
cout<<"rok urodzenia=";	cout<<a.rok_urodzenia<<endl;
system ("pause");
}
