#include <iostream>
using namespace std;

void swap(int &ref1,int &ref2)
{
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
    cout<<"After swapping:"<<endl;
    cout<<"a="<<ref1<<" p="<<ref2<<endl;
}
int main()
{
    int a=7,p=4;
    cout<<"Before swapping:"<<endl;
    cout<<"a="<<a<<" p="<<p;
    swap(a,p);
    return 0;
}
