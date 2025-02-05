#include <iostream>
using namespace std;
int main()
{
      string napis;
      cout<<"napis=";
      cin.sync();
      getline(cin, napis);
      cout<<"tekst wyswietlany wspak"<<endl;
      for (int i=0;i<napis.length();i++)
            cout <<napis[napis.length()-i-1];
      cout <<endl;
      system("pause");
      return 0;
}
