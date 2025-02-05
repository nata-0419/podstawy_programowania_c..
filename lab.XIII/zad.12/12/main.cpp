#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

bool jestWyrazem(char c) {
    return isalnum(c) || c=='_';
}

void dziel()
{
	fstream odczyt;
	odczyt.open("dane.txt", ios::in);


	if (odczyt.good() ) {
        string linia;
        int i=0;
        while (getline(odczyt,linia)) {
            i++;
            cout<<"linia "<<i<<" - "<<linia<<endl;
            int liczbaWyrazow = 0;
            bool wWyrazie = false;

                for (char c : linia) {
                if (jestWyrazem(c)) {
                    if (!wWyrazie) {
                        liczbaWyrazow++;
                        wWyrazie = true;
                    }
                } else {
                    wWyrazie = false;
                }
        }
        cout << "Liczba wyrazow w linii " << i << ": " << liczbaWyrazow << endl;
        }
        odczyt.close();
    } else { cout<<"Brak pliku"<<endl;
}}
int main()
{
    dziel();
    return 0;
}

