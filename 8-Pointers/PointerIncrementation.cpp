#include<iostream>
using namespace std;

int main()
{
    int ar[]={1,2,3};
    int *p;
    p=ar;

    for(int i=0;i<3;i++)
    {
        cout<<"Value of *p:"<<*p<<endl;
        cout<<"Value of p:"<<p<<endl;
        p++;
    }
    return 0;
}
