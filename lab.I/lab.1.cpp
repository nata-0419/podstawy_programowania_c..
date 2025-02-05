#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int wymiar=10;
int n;
float dane[wymiar];
cout<<"podaj ile chcesz danych n=";
cin>>n;
cout << "podaj dane do tablicy"<<endl;
for (int i=0;i<n;i++)
{
cout<<"dane["<<i<<"]=";
cin>>dane[i];
}
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (dane[j] > dane[i]) {
                count++;
            }
        }
    if (count == 1) {
            cout << "Liczba, od ktorej jest tylko jedna wieksza to: " << dane[i] << endl;

        }
    }


//    int max = dane[0];
//    for (int i = 1; i < n; i++) {
//        if (dane[i] > max) {
//            max = dane[i];
//        }
//    }
//    cout << "Najwiêksza liczba w tablicy to: " << max << endl;


system("pause");
return 0;
}
