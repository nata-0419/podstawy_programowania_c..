/*
    3.	Napisz funkcjê, która w tablicy dwuwymiarowej n x m przekazanej jako parametr funkcji,
w ka¿dym wierszu podanej macierzy odszuka element maksymalny. Funkcja powinna zwracaæ dwie wartoœci:
liczbê maksymaln¹ oraz numer kolumny (skorzystaj z przekazywania danych za pomoc¹ referencji).

*/

#include <iostream>
using namespace std;

void znajdzMax(int **macierz, int n, int m, int& warMax, int&nrKol){
    warMax = macierz[0][0];
    nrKol = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (macierz[i][j] > warMax){
                warMax = macierz[i][j];
                nrKol = j;
            }
        }
    }
}
void wyswietlM(int** macierz, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << macierz[i][j]<<" ";
        }
        cout<<endl;
    }
}

void wczytajM(int**& macierz, int n, int m) {
    cout << "Podaj elementy macierzy:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "macierz[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

int main() {

int n,m;
cout<<"Podaj liczbe wierszy: ";cin>>n;
cout<<"Podaj liczbê kolumn: "; cin>>m;

    int** macierz = new int*[n];
    for (int i=0;i<n; i++){
        macierz[i] = new int[m];
    }
wczytajM(macierz, n, m);
int warMax, maxKolumna;

    cout << "\nTablica macierzy:" << endl;
    wyswietlM(macierz, n, m);

    znajdzM(macierz, n, m, warMax, maxKolumna);

    cout << "\nMaksymalna wartoœæ w macierzy to: " << warMax << endl;
    cout << "Numer kolumny z maksymalnym elementem: " << maxKolumna + 1 << endl;  // Numeracja 1-based

    for (int i = 0; i < n; ++i) {
        delete[] macierz[i];
    }
    delete[] macierz;

    return 0;
}
}
