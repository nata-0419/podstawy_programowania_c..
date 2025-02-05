/*
Zadanie 6.1. Dany jest ci¹gu n-elementowy liczb ca³kowitych. Napisz program wypisuj¹cy te elementy,
których wartoœæ jest równa lub przekracza wartoœæ œredni¹ dla tego ci¹gu.
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
