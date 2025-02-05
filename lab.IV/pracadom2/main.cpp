
        //cw.2 Program reaguj¹cy na naciœniêcie klawisza funkcyjnego

#include <iostream>
#include <conio.h>
using namespace std;
int main() {

char z;
   z=getch();
   cout<<"Pierwszy kod:"<<(int)z<<endl;
	   if ((int)z==0)
	     z=getch();
   cout<<"Drugi kod="<<(int)z<<endl;
system ("pause");
}
