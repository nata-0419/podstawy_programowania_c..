/*
2.	Napisz program definiuj¹cy typ strukturalny TSamochod (marka, silnik, rocznik, numer nadwozia)
    oraz bazê danych przechowuj¹c¹ zmienne typu TSamochod. Napisz program,
    który bêdzie dodawa³ samochody do bazy, a nastêpnie w zale¿noœci od wyboru u¿ytkownika:
a.	Wypisywa³ z bazy samochody danej marki.
b.	Wypisywa³ z bazy samochody z danego rocznika.
c.	Wyszukiwa³, czy w bazie jest samochód o danym numerze nadwozia a nastêpnie wypisywa³ jego dane na ekran

*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct TSsamochod
    {
        string marka;
        string silnik;
        string rocznik;
        int nr_nadwozia;
    };
TSsamochod o;
    cout<<"Marka: "; cin>>o.marka;
    cout<<"Silnik: "; cin>>o.silnik;
    cout<<"Rocznik: ";cin>>o.rocznik;
    cout<<"Nr_nadwozia: "; cin>>o.nr_nadwozia;
    cout<<"Wpisane dane o samochodzie: "<<endl;
    cout<<o.marka<<" "<<o.silnik<<" "<<o.rocznik<<" "<<o.nr_nadwozia<<endl;

string infMarka;
    cout<<"Dodatkowe informacje: "<<endl;
    cout<<"Podaj marke z ktorej chcesz znac samochody: "; cin>>infMarka;
    if (infMarka==o.marka){
        cout<<"Mamy samochody takiej marki";
        cout<<o.marka<<" "<<o.silnik<<" "<<o.rocznik<<endl;
} else
        cout<<"Nie mamy takiej marki"<<endl;
    cout<<endl;

string infRok;
        cout<<"Podaj rocznik z ktorej chcesz znac samochody: "; cin>>infRok;
    if (infRok==o.rocznik){
        cout<<"Mamy samochody z takiego roku"<<endl;
        cout<<o.marka<<" "<<o.silnik<<" "<<o.rocznik<<endl;
} else
        cout<<"Nie mamy samochodow z takiego rocznika"<<endl;
    cout<<endl;

int infNrNad;
    cout<<"Podaj nr_nadwozia z ktorej chcesz znac samochody: "; cin>>infNrNad;
    if (infNrNad==o.nr_nadwozia){
        cout<<"Mamy samochod z takim numerem"<<endl;
        cout<<o.marka<<" "<<o.silnik<<" "<<o.rocznik<<" "<<o.nr_nadwozia<<endl;
} else
        cout<<"Nie mamy takiego samochodu"<<endl;
    cout<<endl;
}
