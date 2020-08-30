#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;
    cout<<"Value of a before swapping:"<<a<<endl;
    cout<<"Value of b before swapping:"<<b<<endl;
    swap(a,b);
    cout<<"Value of a after swapping:"<<a<<endl;
    cout<<"Value of b after swapping:"<<b<<endl;

    string s1("Pinakin"),s2("Aishani");
    cout<<"Value of s1 before swapping:"<<s1<<endl;
    cout<<"Value of s2 before swapping:"<<s2<<endl;
    swap(s1,s2);
    cout<<"Value of s1 after swapping:"<<s1<<endl;
    cout<<"Value of s2 after swapping:"<<s2<<endl;

    return 0;
}
