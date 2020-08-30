#include<iostream>
using namespace std;

int main()
{
    string s1("New String");
    cout<<"String before clearing: "<<s1<<endl;
    cout<<"String length before clearing: "<<s1.length()<<endl;
    s1.clear();
    cout<<"String after clearing:"<<s1<<endl;
    cout<<"String length after clearing: "<<s1.length()<<endl;
    return 0;
}
