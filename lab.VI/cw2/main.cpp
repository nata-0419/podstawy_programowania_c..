#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int N;
    int tablica[N][N] = {0};
    cout << "Podaj rozmiar tablicy: ";
    cin >> N;

    srand(time(0));
    int x = rand() % N;
    int y = rand() % N;

    tablica[x][y] = 1;

    cout << "Skoczek znajduje sie na pozycji (" << x << ", " << y << ")." << endl;

    int ruchy[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    cout << "Pola, ktore skoczek bije:" << endl;
    for (int i = 0; i < 8; i++) {
        int nx = x + ruchy[i][0];
        int ny = y + ruchy[i][1];

        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            cout << "(" << nx << ", " << ny << ")" << endl;
        }
    }

    return 0;
}

