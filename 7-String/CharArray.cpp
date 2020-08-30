#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Hello this is a demo string.");
    cout<<"Length of string="<<s1.length()<<endl;
    const char* charArray=s1.c_str();
    cout<<"CharArray="<<charArray<<endl;
    return 0;
}
