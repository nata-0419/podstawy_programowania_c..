#include <iostream>
using namespace std;

struct Data{
	int rok, miesiac, dzien;
};

struct osoba{
	   char imie[20];
	   char nazwisko[30];
	   Data data_urodzenia;
};
int main()
{
	osoba a;
	cout<<"Podaj imie=";cin>>a.imie;
	cout<<"Podaj nazwisko=";cin>>a.nazwisko;
	cout << "Podaj date urodzenia:\n";
	cout<<"rok: "; cin >> a.data_urodzenia.rok;
	cout<<"miesiac: "; cin >>a.data_urodzenia.miesiac;
	cout<<"dzien: "; cin >> a.data_urodzenia.dzien;

	cout<<"wczytane dane:\n";
	cout<<"imie=";	cout<<a.imie<<endl;
	cout<<"nazwisko=";	cout<<a.nazwisko<<endl;
	cout << "Data urodzenia:";
	cout << a.data_urodzenia.rok<<"-"<< a.data_urodzenia.miesiac<<"-"<< a.data_urodzenia.dzien<<"\n";
	system ("pause");
}

