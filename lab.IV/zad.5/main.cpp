//zad.5	Dany jest napis. Mo�e on zawiera� tak�e znaki odst�pu. Wczytaj go, a nast�pnie:
        //�	 zamie� wszystkie znaki odst�pu na gwiazdki.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
string napis;
system("chcp 1250>>null");
cout<<"Wpisz sw�j tekst:"<<endl;
getline(cin,napis);
for (int i=0; i<napis.length(); i++) {
    if (napis.at(i)==' ')
        {
        napis.erase(i,1);
        napis.insert(i,"*");
        }
    }
cout<<napis;
}

