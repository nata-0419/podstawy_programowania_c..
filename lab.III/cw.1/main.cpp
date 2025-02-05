/*
1.	Napisz program, kt�ry wczyta od u�ytkownika temperatur�:
a.	podan� w stopniach Celsjusza i zamieni j� na stopnie Fahrenheita,
b.	podan� w stopniach Fahrenheita i zamieni j� na stopnie Celsjusza, gdzie: 1 F = 32 + 9/5 * C
    Dane i wyniki wypisz z dok�adno�ci� do dw�ch miejsc po przecinku.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double temperature;


    cout << "1. Zamiana stopni Celsjusza na Fahrenheita\n";
    cout << "2. Zamiana stopni Fahrenheita na Celsjusza\n";
    cout << "Wybierz opcje: ";cin >> choice;

    if (choice == 1) {
        cout << "Podaj temperature w stopniach Celsjusza: ";
        cin >> temperature;
        double fahrenheit = (temperature * 9.0 / 5.0) + 32.0;
        cout << fixed << setprecision(2);
        cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << " F" << endl;
    } else if (choice == 2) {
        cout << "Podaj temperature w stopniach Fahrenheita: ";
        cin >> temperature;
        double celsius = (temperature - 32.0) * 5.0 / 9.0;
        cout << fixed << setprecision(2);
        cout << "Temperatura w stopniach Celsjusza: " << celsius << " C" << endl;
    } else {
        cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}
