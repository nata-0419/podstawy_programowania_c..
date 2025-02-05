#include<iostream>
#include<stdlib.h>
using namespace std;

struct TData{
 int d,m,r;
};

int main(int argc, char* argv[])
{
 TData data;
 TData *wsk;
 wsk = &data;               //ustawienie wskaünika na obiekcie data typu TData
 cout << "dzien="; cin >> (*wsk).d;
 cout << "miesiac="; cin >> (*wsk).m;
 cout << "rok="; cin >> (*wsk).r;
 cout << (*wsk).d << "-" << (*wsk).m << "-" <<(*wsk).r << endl;
 system("Pause");
 return 0;
}
