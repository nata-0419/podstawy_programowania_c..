//zad.4 4.	Napisz program klasyfikuj�cy klawisze naciskane na klawiaturze i wy�wietlaj�cy jeden z napis�w:
    //- ma�a litera  - du�a litera  - cyfra  - klawisz ENTER  - klawisz ESC  - strza�ka w lewo  - strza�ka w prawo  - klawisz funkcyjny F1  - inny klawisz


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
