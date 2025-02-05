#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;


bool trojkat(float a, float b, float c){
    return a+b>c && b+c>a && a+c>b;
}

float poleOb(float a, float b, float c){
    float p = (a+b+c)/2;
}

void czytanie(string nazwaPliku) {
   ifstream plikOdczyt(nazwaPliku);
   ofstream plikWynik("wynik.txt");
   if (plikOdczyt.is_open()){
    float a,b,c;
    string linia;
    while (plikOdczyt >> a >> b >> c) {
        if(trojkat(a,b,c)){
            float pole = poleOb(a,b,c);
            plikWynik <<a<<" "<<" "<<b<<" "<<c<<" Pole = "<<pole;
        }

    }
   plikOdczyt.close();
   plikWynik.close();
   }
   else cout <<"brak pliku"<<endl;
}
int main()
{
    czytanie("dane.txt");
    return 0;
}

