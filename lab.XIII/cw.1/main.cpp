//1.	W notatniku utw�rz plik tekstowy dane.txt. W kolejnych wierszach podaj dowolny tekst. Napisz program, kt�ry:
//�	wczyta dane z pliku,
//�	wypisze ile razy w ka�dym wierszu wyst�pi�a litera np. 'a'.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int sprawdz( char litera, const string& linia) {
    int count = 0;
    for (char c : linia){
        if (tolower(c)== tolower(litera)){
        count ++;
        }
    }
    return count;
}

int main()
{
    fstream plik("dane.txt");
    string linia;
    char litera = 'a';
    int liniaNumer = 1;
    while (getline(plik,linia)){
        int count = sprawdz(litera,linia);
        cout << "w lini jest " << liniaNumer << " 'a' wystepuje " << count << " razy."<<endl;
        liniaNumer++;
    }
    plik.close();
    return 0;
}
