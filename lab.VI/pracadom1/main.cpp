/*
Zadanie 6.1. Dany jest ci�gu n-elementowy liczb ca�kowitych. Napisz program wypisuj�cy te elementy,
kt�rych warto�� jest r�wna lub przekracza warto�� �redni� dla tego ci�gu.
*/


#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
const int wymiar=10;
int n;
float dane[wymiar];
cin>>n;
cout << "podaj dane do tablicy"<<endl;  //
for (int i=0;i<n;i++)
{
cout<<"dane["<<i<<"]=";
cin>>dane[i];
}
int suma=0;
for (int i=0;i<n;i++)
suma+=dane[i];
float srednia=(float)suma/n;
cout<<"Elementy powyzej sredniej to:"<<endl;
for (int i=0;i<n;i++)
if (dane[i]>=srednia) cout<<dane[i]<<endl;
system("pause");
return 0;
}
