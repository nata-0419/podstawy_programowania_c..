#ifndef funkcjePrzeciazeniowe.h
#define funkcjePrzeciazeniowe.h

using namespace std;
struct Wektor2D {
    float x, y;

    Wektor2D operator*(float liczba) const {
        return Wektor2D{x * liczba, y * liczba};
    }

    float operator*(const Wektor2D& w) const {
        return x * w.x + y * w.y;
    }
};

struct Wektor3D {
    float x, y, z;

    Wektor3D operator*(float liczba) const {
        return Wektor3D{x * liczba, y * liczba, z * liczba};
    }

    float operator*(const Wektor3D& w) const {
        return x * w.x + y * w.y + z * w.z;
    }
};

struct Macierz2x2 {
    float m[2][2];

    Macierz2x2 operator*(const Macierz2x2& m2) const {
        Macierz2x2 wynik;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                wynik.m[i][j] = 0;
                for (int k = 0; k < 2; ++k) {
                    wynik.m[i][j] += m[i][k] * m2.m[k][j];
                }
            }
        }
        return wynik;
    }
};

struct StrukturaA {
    float liczba;
};

struct StrukturaB {
    float liczba;
};

float operator*(const StrukturaA& a, const StrukturaB& b) {
    return a.liczba * b.liczba;
}

#endif
