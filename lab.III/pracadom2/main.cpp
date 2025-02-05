    //3.3.1 Napisz program, w którym iteracyjnie bêdzie zmniejszana zmienna x.
    //  Przyjmij, ¿e x ma pocz¹tkow¹ wartoœæ 1 i jest zmniejszane o 0.1. Program ma byæ wykonywany dopóki x bêdzie ró¿ne od zera.

#include <iostream>
#include <cstdlib>

using namespace std;
int main() {

float x=1.0;
    while (x!=0) {
			x=x-0.55;
			cout<<x;
    }
    return 0;
}
