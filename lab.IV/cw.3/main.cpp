/*



*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string ciag1, ciag2;

    cout << "Wprowadz pierwszy ciag: "; getline(cin, ciag1);
    cout << "Wprowadz drugi ciag: "; getline(cin, ciag2);

    for (char c2 : ciag2) {
        bool znaleziono = false;
    for (char c1 : ciag1) {
            if (c2 == c1) {
            znaleziono = true;
            break;
            }
        }
    if (!znaleziono) {
            cout << "Ciag 2 NIE zawiera znaków z ciagu 1." << endl;
        }
    }
            cout << "Ciag 2 zawiera znaki z ciagu 1." << endl;

    return 0;
}


