#include<iostream>

void fun(int *p,int x) throw (int *,int)
{
    if(p==NULL)
        throw p;
    if(x==0)
        throw x;
}
int main()
{
    try{
        fun(NULL,0);
    }
    catch(...){
        std::cout<<"Exception Caught from fun().";
    }
    return 0;
}
