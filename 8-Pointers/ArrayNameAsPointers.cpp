#include <iostream>
using namespace std;

int main()
{
    int a[]={4,5,6,7};
    int *p;
    p=a;

    for(int i=0;i<4;i++)
        cout<<"p["<<i<<"]:"<<p[i]<<endl;

    for(int i=0;i<4;i++)
        cout<<"*p++:"<<*p++<<endl;

    return 0;
}
