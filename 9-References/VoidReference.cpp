#include<iostream>

using namespace std;

int main()
{
    int a=7;
    void &ref=a;
    cout<<"Ref:"<<ref<<endl;
    cout<<"a:"<<&a;
    return 0;
}
