/*
1.	Zdefiniuj przestrzeñ nazw „grafika2D” a w niej zaimplementuj funkcje obliczaj¹ce dla punktu (x,y):
    przesuniêcie o wektor t, obrót o k¹t a (k¹t podajemy w stopniach), skalowanie o wektor s,
    odleg³oœæ dwu punktów od siebie. Napisz program, w którym ta przestrzeñ nazw bêdzie u¿yteczna. U¿yj j¹.
*/

#include <iostream>
#include <cmath>

namespace grafika2D {

    void przesuniecie(float &x, float &y, float tx, float ty) {
        x += tx;
        y += ty;
    }

    void obrot(float &x, float &y, float kat) {
        const float PI = 3.14f;
        float katRad = kat * PI / 180.0f;
        float xNew = x * cosf(katRad) - y * sinf(katRad);
        float yNew = x * sinf(katRad) + y * cosf(katRad);

        x = xNew;
        y = yNew;
    }

    void skalowanie(float &x, float &y, float sx, float sy) {
        x *= sx;
        y *= sy;
    }

    float odleglosc(float x1, float y1, float x2, float y2) {
        return sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
    }

}
using namespace std;
int main() {
    float x, y;

    cout << "Podaj wspolrzedne poczatkowego punktu (x y): "; cin >> x >> y;

    float tx, ty;
    cout << "Podaj wektor przesuniecia (tx ty): "; cin >> tx >> ty;

    grafika2D::przesuniecie(x, y, tx, ty);
    cout << "Po przesunieciu: (" << x << ", " << y << ")" << endl;

    float kat;
    cout << "Podaj kat obrotu (w stopniach): "; cin >> kat;

    grafika2D::obrot(x, y, kat);
    cout << "Po obrocie o " << kat << " stopni: (" << x << ", " << y << ")" << endl;

    float sx, sy;
    cout << "Podaj wektor skalowania (sx sy): "; cin >> sx >> sy;

    grafika2D::skalowanie(x, y, sx, sy);
    cout << "Po skalowaniu o (" << sx << ", " << sy << "): (" << x << ", " << y << ")" <<endl;

    float x2, y2;
    cout << "Podaj wspolrzedne drugiego punktu (x2 y2): "; cin >> x2 >> y2;

    float dist = grafika2D::odleglosc(x, y, x2, y2);
    cout << "Odleglosc miedzy punktami: " << dist <<endl;

    return 0;
}

