/*
2.	Napisz program, kt�ry wczytuje z klawiatury liczb� punkt�w z kolokwium w
postaci warto�ci ca�kowitej z przedzia�u od 0 do 10, a nast�pnie wy�wietla na
ekranie napis, b�d�cy s�own� ocen� odpowiadaj�c� podanej liczbie punkt�w.
Przyjmij nast�puj�ce oceny: mierna (0�1 pkt.), niedostateczna (2�3 pkt.),
dostateczna(4�5 pkt.), dobra (6�7 pkt.), bardzo dobra (8�9 pkt.), celuj�ca(10 pkt.).

*/


#include <iostream>
using namespace std;

int main() {

int a;
cout<<"Wpisz swoja liczbe punktow: "; cin>>a;

if (a==0 || a==1){
    cout<<"Twoja ocena to ocena niedostateczna";
} else if (a==2 || a==3){
    cout<<"Twoja ocena to ocena dostateczna";
} else if (a==4 || a==5) {
    cout<<"Twoja ocena to ocena poprawna";
} else if (a==6 || a==7) {
    cout<<"Twoja ocena to ocena dobra";
} else if (a==8 || a==9) {
    cout<<"Twoja ocena to ocena bardzo dobra";
} else if (a==10) {
    cout<<"Twoja ocena to ocena celujaca";
}
}
