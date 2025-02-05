#include <iostream>
using namespace std;
int main()
{
const int N=10;
float a[N][N];
int n;
cout << "Podaj dane:"<<endl;
cout<<"n="; cin>>n;
for (int i=0;i<n;i++)
for (int j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
float max=a[0][0];
for (int i=0;i<n;i++)
for (int j=0;j<n;j++)
if (a[i][j]>max) max=a[i][j];
cout<<"Dla macierzy:";
for (int i=0;i<n;i++)
{
cout<<endl;
for (int j=0;j<n;j++)
cout<<a[i][j]<<"  ";
}
cout<<endl<<"elemnet maksymalny wynosi:"<<max<<endl;
system("pause");
return 0;
 }
