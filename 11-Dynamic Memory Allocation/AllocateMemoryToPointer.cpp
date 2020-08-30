#include<iostream>

int main()
{
    int *p=new(std::nothrow) int;
    std::cout<<"Data present in allocated memory before initialization:"<<*p<<std::endl;
    *p=77;
    std::cout<<"Data present in allocated memory after initialization:"<<*p<<std::endl;
    delete p;
    std::cout<<"Data present in allocated memory after deleting:"<<*p<<std::endl;
    return 0;
}
