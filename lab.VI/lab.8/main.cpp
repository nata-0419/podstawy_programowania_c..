/*
    Dana jest prostok¹tna nxm liczb ca³kowitych. Utwórz trzy tablice jednowymiarowe,
    jedna zawiera liczby wiêksze od zera, druga mniejsze a trzecia zera.
WEJŒCIE:
2 3
 {[2, 0, -1],
 [-4, 4, 6]}
WYJŒCIE:
{2, 4, 6}
{-1, -4}
{0}

*/

#include <iostream>
using namespace std;
int main()
{
const int N=10;
const int M=10;
float a[N][M];
int n,m;
int Z[10], W[10], U[10];
int z=0, w=0, u=0;

cout << "Podaj dane:" <<endl;
cout << "n= "; cin >> n;
cout << "m= "; cin >> m;

for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){

    cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j];

    if (a[i][j]==0){
        Z[z++]=a[i][j];
    } else if (a[i][j]<0) {
        U[u++]=a[i][j];
    } else if (a[i][j]>0) {
        W[w++]=a[i][j];
}}}
    cout<<"Tablica dodatnich liczb: "<<endl;
    cout<<"{";

for(int i=0; i<w; i++){
        cout<<W[i]<<",";
    }
    cout<<"}"<<endl;
    cout<<"Tablica ujemnych liczb: "<<endl;
    cout<<"{";

for(int i=0; i<u; i++){
        cout<<U[i]<<",";
    }
    cout<<"}"<<endl;
    cout<<"Tablica liczb 0: "<<endl;
    cout<<"{";

for(int i=0; i<z; i++){
        cout<<Z[i];
    }
    cout<<"}"<<endl;

system("pause");
return 0;
}



