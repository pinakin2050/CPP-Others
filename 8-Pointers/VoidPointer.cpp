#include<iostream>

using namespace std;

int main()
{
    int a=7;
    void* p=&a;
    cout<<"P:"<<p<<endl;
    cout<<"Address of a:"<<&a;
    return 0;
}
