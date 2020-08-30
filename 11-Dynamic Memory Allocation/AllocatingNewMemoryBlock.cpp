#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p= new(nothrow) int[10];
    /*
    If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception
    of type std::bad_alloc, unless “nothrow” is used with the new operator, in which case it returns a NULL pointer
    */
    if(p!=NULL)
    {
        for(int i=0;i<10;i++)
        {
            p[i]=i;
        }
    }
    else
    {
        cout<<"Memory full!";
        exit(0);
    }

    for(int i=0;i<10;i++)
        {
            cout<<" "<<*p;
            p++;
        }
    return 0;
}
