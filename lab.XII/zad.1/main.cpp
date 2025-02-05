/*
	Dany jest wzór:
a_n= {  (1,gdy n=0
         2,gdy n=1@
         a_(n-1)*a_(n-2),gdy n>1)┤
Oblicz an. Użyj rekurencji.
*/


#include <iostream>
using namespace std;

int a(int n)
{
	if (n==0){
        return 1;
	}
	else if (n==1){
        return 2;
	}
	else{
        return a(n-1)*a(n-2);
	}
}
int main()
{
    int n;
    cout<<"Podaj n: "; cin>>n;
	cout<<a(n)<<endl;

	system("pause");
	return 1;
}

