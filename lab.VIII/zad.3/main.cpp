/*  3.	Zadeklaruj dwuwymiarow¹ dynamiczn¹ tablicê liczb rzeczywistych o wymiarach m x n.
    Napisz program, który wype³ni tablicê liczbami pseudolosowymi z przedzia³u -5, 5 i wypisze wartoœæ i
    indeksy elementu  tablicy najmniej ró¿ni¹cego siê od œredniej liczonej dla ca³ej tablicy.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

const int wymM=10;
const int wymN=10;

int main() {
    int m, n;
    cout << "Podaj liczbe wierszy m: ";
    cin >> m;
    cout << "Podaj liczbe kolumn n: ";
    cin >> n;

    double** tablica = new double*[m];
    for (int i = 0; i < m; i++) {
        tablica[i] = new double[n];
    }
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tablica[i][j] = (rand() % 101 - 50) / 10.0;
        }
    }
    cout << "Tablica:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << fixed << setprecision(1) << tablica[i][j] << "\t";
        }
        cout << endl;
    }
    double suma = 0;
    int liczbaElementow = m * n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            suma += tablica[i][j];
        }
    }
    double srednia = suma / liczbaElementow;
    double najmniejszaRoznica = fabs(tablica[0][0] - srednia);
    double najblizszyElement = tablica[0][0];
    int indeksWiersza = 0, indeksKolumny = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            double roznica = fabs(tablica[i][j] - srednia);
            if (roznica < najmniejszaRoznica) {
                najmniejszaRoznica = roznica;
                najblizszyElement = tablica[i][j];
                indeksWiersza = i;
                indeksKolumny = j;
            }
        }
    }
    cout << "Srednia tablicy: " << fixed << setprecision(1) << srednia << endl;
    cout << "Element najmniej rozniacy sie od sredniej: " << najblizszyElement
         << " w wierszu " << indeksWiersza << " i kolumnie " << indeksKolumny << endl;

    for (int i = 0; i < m; i++) {
        delete[] tablica[i];
    }
    delete[] tablica;

    return 0;
}

