#include<iostream>

void arraySizeWithVariable(int a[])
{
    std::cout<<"Size of passed array to an array variable:"<<sizeof(a)<<std::endl;
}

void arraySizeWithPointer(int (*a)[7])
{
    std::cout<<"Size of passed array to an array Pointer:"<<sizeof(a)<<std::endl;
}

void arraySizeWithReference(int (&a)[7])
{
    std::cout<<"Size of passed array to an array reference:"<<sizeof(a)<<std::endl;
}

int main()
{
    int ary[7]={1,2,3,4,5,6,7};
    std::cout<<"Size of main array:"<<sizeof(ary)<<std::endl;
    arraySizeWithVariable(ary);
    arraySizeWithPointer(&ary);
    arraySizeWithReference(ary);
    return 0;
}
