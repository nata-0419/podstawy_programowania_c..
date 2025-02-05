
//        //cw.3 Dzialania na funckji string

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main() {

    string s="Natalia9904";
    cout<<"napis="<<s<<endl;
    cout<<"s.size="<<s.size()<<endl;
    cout<<"s.length="<<s.length()<<endl;
    cout<<"s.substr="<<s.substr(6,3)<<endl;//liczymy od 0
    cout<<"s.insert="<<s.insert(6,"C/")<<endl;
    cout<<"s.eraze="<<s.erase(6,5)<<endl;
    cout<<"s.at="<<s.at(0)<<endl;

}
