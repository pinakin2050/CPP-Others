#include<iostream>
using namespace std;

int main()
{
    string s1("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    for(int i=0;i<s1.length();i++)
    {
        cout<<s1.at(i);
        cout<<"\t"<<s1[s1.length()-1-i]<<endl;
    }
    return 0;
}
