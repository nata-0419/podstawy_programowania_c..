//cw.1 Oblicz funkcjê e^x z przybli¿eniem.


#include <iostream>
#include <cmath>
using namespace std;

int main()
{

float n,x,s,i,skl;
s=0;
i=0;
cout<<"Wprowadz x=";cin>>x;
cout<<"Wprowadz n=";cin>>n;
skl=1;
    for (int i=0; i<=n; i++){
        s=s+skl;
        skl=skl*x/(i+1);
    }
    cout<<"s="<<s<<"\n";
    cout<<"exp(x)="<<exp(x)<<endl;
    cout<<"fabs(exp(x)-s)="<<fabs(exp(x)-s)<<endl;

    return 0;
}
