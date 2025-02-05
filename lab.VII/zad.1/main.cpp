/*1.	Napisz program przechowuj¹cy bazê zawieraj¹c¹ dane Studentów zawieraj¹ca: Nazwisko, kierunek, listê przedmiotów i oceny z nich. Napisz program, który bêdzie:
•	Dodawa³ studenta do listy;
•	Wyszukiwa³ studentów œredniej z semestru wiêkszej od zadanej jako parametr, i wypisywa³ ich nazwiska
*/

#include <iostream>
#include <stdlib.h>
using namespace std;


struct student {
    char nazwisko[20];
    char kierunek[20];
    float fizyka[5];
    float programowanie[5];
    float matematyka[5];
};

int main()
{
    const int wymiar=10;
	int n;
	float dane[wymiar];
	float daneP[wymiar];
	float daneM[wymiar];
student a;
    cout<<"Podaj nazwisko=";cin>>a.nazwisko;
    cout<<"Podaj kierunek=";cin>>a.kierunek;
    cout<<"Podaj ile masz ocen=";cin>>n;
cout<<"Podaj oceny z fizyki= \n";
	for (int i=0;i<n;i++)
	{
		cout<<"dane["<<i<<"]=";
		cin>>dane[i];
	}
	int suma=0;
	for (int i=0;i<n;i++)
		suma+=dane[i];
	float sredniaF=(float)suma/n;

cout<<"Podaj oceny z programowania= \n";
    for (int i=0;i<n;i++)
	{
		cout<<"dane["<<i<<"]= \n";
		cin>>daneP[i];
	}
    int sumaP=0;
	for (int i=0;i<n;i++)
		sumaP+=daneP[i];
	float sredniaP=(float)sumaP/n;

cout<<"Podaj oceny z matematyki= \n";
    for (int i=0;i<n;i++)
	{
		cout<<"dane["<<i<<"]=";
		cin>>daneM[i];
	}
    int sumaM=0;
	for (int i=0;i<n;i++)
		sumaM+=daneM[i];
	float sredniaM=(float)sumaM/n;



cout<<"wczytane dane:\n";
	cout<<"nazwisko=";	cout<<a.nazwisko<<endl;
    cout<<"kierunek=";	cout<<a.kierunek<<endl;
    cout<<"srednia z fizyki=";	cout<<sredniaF<<endl;
    cout<<"srednia z programowania=";	cout<<sredniaP<<endl;
    cout<<"srednia z matematyki=";	cout<<sredniaM<<endl;
}
