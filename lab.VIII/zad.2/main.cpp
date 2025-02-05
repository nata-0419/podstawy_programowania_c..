/* 2. Zadeklaruj jednowymiarow¹ dynamiczn¹ tablicê liczb rzeczywistych, do przechowywania kursu $ w podanej
            przez u¿ytkownika liczbie dni.
a.	WprowadŸ dane do tablicy
b.	Wypisz dane z tablicy
c.	Oblicz œredni kurs
*/


#include<iostream>
using namespace std;
main()
{
int *T;         // tworzymy wskaŸnik
int i,n;
cout<<"Podaj liczbe dni:";
cin >> n;
T = new int[n];  // tworzymy tablicê dynamiczn¹

cout << "Wprowadz kursy $ na " << n << " dni:\n";
    for (int i = 0; i < n; i++) {
        cout << "Dzien " << i + 1 << ": ";
        cin >> T[i];
    }
cout << "\nWprowadzone kursy:\n";
    for (int i = 0; i < n; i++) {
        cout << "Dzien " << i + 1 << ": " << T[i] << " $ \n";
    }
double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += T[i];
    }
double sredniKurs = suma / n;
    cout << "\nSredni kurs wynosi: " << sredniKurs << " $ \n";

    delete[] T;
    return 0;
}
