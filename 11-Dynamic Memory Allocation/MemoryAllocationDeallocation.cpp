#include<iostream>
using namespace std;

int main()
{
    int *p=NULL;
    p= new(nothrow) int;
    *p=25;

    float *a=new(nothrow) float[10];

    if(!a)
        cout<<"Memory allocation failed.";
    else
    {
        for(int i=0;i<10;i++)
        {
            a[i]=i;
        }
    }

    for(int i=0;i<10;i++)
        {
            cout<<*a<<endl;
            a++;
        }
    delete p;
    delete[] a;

    return 0;
}
