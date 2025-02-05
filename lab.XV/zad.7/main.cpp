//7.	Zdefiniuj klasê Film o prywatnych sk³adowych: tytul, rezyser, czas trwania, tablica nazwisk aktorów pierwszoplanowych
//– max 5, konstruktor z argumentami: tytul, rezyser, tablica nazwisk aktorów oraz inne metody niezbêdne do  napisania
//programu, który: pobiera dane od u¿ytkownika i tworzy tablicê n – filmów, sprawdza, czy w tablicy s¹ dane o filmie o podanym
// tytule, wypisuje dane filmów, oblicza œredni czas filmu i oblicza w ilu filmach wystêpowa³ aktor o podanym nazwisku.

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class Film
{
private:
    char tytul;
    char rezyser;
    int czasTrwania;
    char aktorzy[5];

public:
    void init(const char* t, const char* r, int czas, const char aktorzy_lista[5])
    {
        this->tytul, t;
        this->rezyser, r;
        this->czasTrwania = czas;
        for (int i = 0; i < 5; ++i)
        {
            this->aktorzy[i], aktorzy_lista[i];
        }
    }

    void sprawdz(const char* tytul)
    {
        if ((this->tytul, tytul) == 0) {
            cout << "Film o tym tytule istnieje." << endl;
        }
        else {
            cout << "Film o tytule nie istnieje." << endl;
        }
    }

    void drukuj()
    {
        cout << "Tytul: " << this->tytul << endl;
        cout << "Rezyser: " << this->rezyser << endl;
        cout << "Czas trwania: " << this->czasTrwania << " minut" << endl;
        cout << "Aktorzy: ";
        for (int i = 0; i < 5; ++i)
        {
            if (this->aktorzy[i] != '\0')
            {
                cout << this->aktorzy[i];
                if (i < 4 && this->aktorzy[i + 1] != '\0')
                    cout << ", ";
            }
        }
        cout << endl;
    }
};

int main()
{
    char aktorzy1[5][100] = {"Keanu Reeves", "Laurence Fishburne", "Carrie-Anne Moss", "", ""};
    char aktorzy2[5][100] = {"Leonardo DiCaprio", "Joseph Gordon-Levitt", "Ellen Page", "", ""};
    Film film1, film2;

    film1.init("Matrix", "Wachowscy", 136, aktorzy1);
    film2.init("Inception", "Christopher Nolan", 148, aktorzy2);

    cout << "Dane o filmie 1:" << endl;
    film1.drukuj();

    cout << "Dane o filmie 2:" << endl;
    film2.drukuj();

    char szukanyTytul[100];
    cout << "Podaj tytul filmu do sprawdzenia: ";
    cin.getline(szukanyTytul, 100);

    film1.sprawdz(szukanyTytul);
    film2.sprawdz(szukanyTytul);

    return 0;
}
