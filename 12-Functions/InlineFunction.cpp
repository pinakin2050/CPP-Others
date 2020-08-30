#include<iostream>
inline int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;
    std::cout<<"Enter the number:";
    std::cin>>n;
    std::cout<<"The cube of the number is "<<cube(n);
    return 0;
}
