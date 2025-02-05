#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct osoba
    {
        string nazwisko;
        char imie[10];
        int wiek;
    };
    osoba o;
    cout<<"Nazwisko:"; cin>>o.nazwisko;
    cout<<"Imie:"; cin>>o.imie;
    cout<<"Wiek:";cin>>o.wiek;
    cout<<o.nazwisko<<" "<<o.imie<<" "<<o.wiek<<endl;
    if (o.nazwisko=="Abacki")
        cout<<"jest Abacki";
    else
        cout<<"nie ma Abacki";
    cout<<endl;
    if (strcmp(o.imie,"Jan")==0)
        cout<<"jest Jan";
    else
        cout<<"nie ma Jana";
}
