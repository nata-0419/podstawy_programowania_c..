//zad.4 4.	Napisz program klasyfikuj¹cy klawisze naciskane na klawiaturze i wyœwietlaj¹cy jeden z napisów:
    //- ma³a litera  - du¿a litera  - cyfra  - klawisz ENTER  - klawisz ESC  - strza³ka w lewo  - strza³ka w prawo  - klawisz funkcyjny F1  - inny klawisz


#include <iostream>
#include <conio.h> // biblioteka ktora odczyta klawisze bez klikniecia ENTER dla _getch()
using namespace std;
int main() {

cout << "Nacisnij klawisz" << endl;

char ch;
while (true) {
int ch = _getch();

    if (ch == 27) {
        break;
    } else if (ch == '\r') {
        cout << "Jest to klawisz ENTER" <<endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " Jest to cyfra" <<endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " Jest to mala litera" <<endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " Jest to duza litera" <<endl;
    } else if (ch == 0 || ch==224) {
            int sk =_getch();
                if (sk == 75) {
                    cout << "jest to strzalka w lewo" <<endl;
                } else if (sk == 77) {
                    cout << "jest to strzalka w prawo" <<endl;
                } else if (sk == 59){
                    cout << "jest to klawisz F1" <<endl;
    }} else {
            cout << "Inny klawisz" <<endl;
        }
    }
}
