#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string s="Geeks for Geeks",word;
    stringstream st(s);
    int cnt=0;
    while(st>>word)
        cout<<word<<endl;
    return 0;
}
