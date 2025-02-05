#include <iostream>
#include <cstdlib >
#include <ctime>
#include <algorithm>
using namespace std;
const int N=5;
int tab[N], tab2[N], tab3[2*N];

void czytaj(int tab[])
{
	for (int i=0;i<N;i++)
        tab[i]=1+(int) rand()/(RAND_MAX+1.0) *100;
}
void pisz(int tab[])
{
	for (int i=0;i<N;i++)
        cout<<tab[i]<<" ; ";
    	cout<<"\n";
}

void pisz_tab3()
{
    for (int i=0; i<2*N; i++){
        cout<<tab3[i]<<" ; ";
    }
}
void polacz(int tab[], int tab2[], int tab3[])
{
    for (int i=0; i<N; i++){
        tab3[i] = tab[i];
        tab3[i + N] = tab2[i];
    }
    sort(tab3,tab3+2*N);
}

int main()
{
	srand(time(NULL));
    cout<<"Elementy pierwszej tablicy: \n";
        czytaj(tab);
        sort(tab, tab + N);
        pisz(tab);
    cout<<"Elementy drugiej tablicy: \n";
        czytaj(tab2);
        sort(tab2, tab2 + N);
        pisz(tab2);
    cout<<"Elementy trzeciej tablicy: \n";
        polacz(tab, tab2, tab3);
        pisz_tab3();
	return 0;
}
