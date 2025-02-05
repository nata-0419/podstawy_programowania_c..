/*
3.	Napisz program definiuj¹cy typ strukturalny oraz 100-elementow¹ tablicê pozwalaj¹c¹
    przechowywaæ informacje o ksi¹¿kach znajduj¹cych siê w bibliotece (tytu³, autor, indeks, rok wydania, cena)
    Napisz program, który bêdzie dodawa³ ksi¹¿ki do bazy a nastêpnie:
    a.	Wypisywa³ ksi¹¿ki wydane w roku zadanym jako parametr
    b.	Wypisywa³ ksi¹¿ki , których cena jest wiêksza od zadanej jako parametr
    c.	Wypisywa³ dane ksi¹¿ki danego autora
*/

#include <iostream>
#include <cstring>

using namespace std;

struct ksiazka
    {
        char tytul[100];            //tablica znaków o dlugości 100
        string autor;
        int indeks;
        int rok_wydania;
        int cena;
    };

int main() {

const int max_ksiazek = 100;
ksiazka ksiazki[max_ksiazek];
int liczbaKs = 0;
char wybor;

    do {
        cout<<"Wpisz dane o ksiazce: "<<endl;

    cout<<"Tytul: "; cin.ignore(); cin.getline(ksiazki[liczbaKs].tytul,100);
    cout<<"Autor: "; getline(cin, ksiazki[liczbaKs].autor);
    cout<<"Id: "; cin>>ksiazki[liczbaKs].indeks;
    cout<<"Rok wydania: ";cin>>ksiazki[liczbaKs].rok_wydania;
    cout<<"Cena: "; cin>>ksiazki[liczbaKs].cena;
    liczbaKs++;


    cout << "Czy chcesz dodac kolejna ksiazke? (t/n): ";
    cin >> wybor;
    cin.ignore();

    } while (wybor == 't' || wybor == 'T');

int infRok;
        cout<<"Podaj rocznik z ktorej chcesz znac ksiazki: "; cin>>infRok;
    for (int i = 0; i < liczbaKs; i++) {
        if (infRok==ksiazki[i].rok_wydania){
        cout<<"Mamy ksiazke z tego roku"<<endl;
        cout<<"Dane o ksiazce. Tytul:"<<ksiazki[i].tytul<<", autor "<<ksiazki[i].autor<<", Nr indeksu "<<ksiazki[i].indeks<<", Rok wydania "<<ksiazki[i].rok_wydania<<", cena "<<ksiazki[i].cena<<endl;
    }}

string infAutor;
        cout<<"Podaj autora ksiazki: ";
        cin.ignore();
        getline(cin, infAutor);
    for (int i = 0; i < liczbaKs; i++) {
        if (infAutor==ksiazki[i].autor){
        cout<<"Mamy ksiazke tego autora"<<endl;
        cout<<"Dane o ksiazce. Tytul:"<<ksiazki[i].tytul<<", autor "<<ksiazki[i].autor<<", Nr indeksu "<<ksiazki[i].indeks<<", Rok wydania "<<ksiazki[i].rok_wydania<<", cena "<<ksiazki[i].cena<<endl;
    }} ;

int infCena;
        cout<<"Podaj cene od ktorej ksiazka ma byc drozsza: "; cin>>infCena;
    for (int i = 0; i < liczbaKs; i++) {
        if (infCena<ksiazki[i].cena){
        cout<<"Ksiazki drozsze od podanej ceny to:"<<endl;
        cout<<"Dane o ksiazce. Tytul:"<<ksiazki[i].tytul<<", autor "<<ksiazki[i].autor<<", Nr indeksu "<<ksiazki[i].indeks<<", Rok wydania "<<ksiazki[i].rok_wydania<<", cena "<<ksiazki[i].cena<<endl;
    }}
}
