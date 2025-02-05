//zad.5	Dany jest napis. Mo¿e on zawieraæ tak¿e znaki odstêpu. Wczytaj go, a nastêpnie:
        //•	 zamieñ wszystkie znaki odstêpu na gwiazdki.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
string napis;
system("chcp 1250>>null");
cout<<"Wpisz swój tekst:"<<endl;
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

