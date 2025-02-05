/*
2.	Napisz program, który wczytuje z klawiatury liczbê punktów z kolokwium w
postaci wartoœci ca³kowitej z przedzia³u od 0 do 10, a nastêpnie wyœwietla na
ekranie napis, bêd¹cy s³own¹ ocen¹ odpowiadaj¹c¹ podanej liczbie punktów.
Przyjmij nastêpuj¹ce oceny: mierna (0÷1 pkt.), niedostateczna (2÷3 pkt.),
dostateczna(4÷5 pkt.), dobra (6÷7 pkt.), bardzo dobra (8÷9 pkt.), celuj¹ca(10 pkt.).

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
