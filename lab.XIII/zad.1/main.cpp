#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Student{
    string imie;
    string nazwisko;
    int rok_studiow;
    string kierunek;
    int stypendium;
};

void wczytajStudentow(const string& nazwa_pliku, int& suma_styp, int& liczba_stud){
    ifstream plik(nazwa_pliku);

    string linia;
    while (getline(plik,linia)){
        stringstream ss(linia);
        Student student;
        string rok_studiow_str, stypendium_str;

        getline(ss, student.imie, ',');
        getline(ss, student.nazwisko, ',');
        getline(ss, rok_studiow_str, ',');
        getline(ss, student.kierunek, ',');
        getline(ss, stypendium_str, ',');

        student.rok_studiow = stoi(rok_studiow_str);
        student.stypendium = stoi(stypendium_str);

    if (student.rok_studiow == 1){
        suma_styp += student.stypendium;
        liczba_stud++;
    }
    }
    plik.close();
}

double obliczSrednia(int suma_styp, int liczba_stud){
    if (liczba_stud > 0 ){
        return static_cast<double>(suma_styp)/liczba_stud;
    }
    return 0.0;
}

void wyswietlWynik(double sredniaStypendium){
    if(sredniaStypendium > 0){
        cout << "Srednia wartosc stypendium dla studentow 1 roku " << sredniaStypendium;
    }
}


int main()
{
    int suma_styp = 0;
    int liczba_stud = 0;

    wczytajStudentow("student.txt", suma_styp, liczba_stud);
    double sredniaStypendium = obliczSrednia(suma_styp, liczba_stud);
    wyswietlWynik(sredniaStypendium);

    return 0;
}
