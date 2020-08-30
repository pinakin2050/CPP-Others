#include<iostream>

int sum(int x,int y,int z=0,int w=0)
{   return (x+y+z+w); }

int sum(int x,int y,float z=0,float w=0)
{   return (x+y+z+w); }

int main()
{
    std::cout<<sum(10,20)<<std::endl;
    std::cout<<sum(10,20,30)<<std::endl;
    std::cout<<sum(10,20,30,40)<<std::endl;

    return 0;
}
