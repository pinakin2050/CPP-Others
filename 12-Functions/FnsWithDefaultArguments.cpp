#include<iostream>
int sum(int x,int y,int z=0,int w=0)
{   return (x+y+z+w); }

int sum2(int x=0,int y=0,int z=0,int w=0)
{   return (x+y+z+w); }

int main()
{
    std::cout<<"Fns with last two default arguments"<<std::endl;
    std::cout<<sum(10,20)<<std::endl;
    std::cout<<sum(10,20,30)<<std::endl;
    std::cout<<sum(10,20,30,40)<<std::endl;

    std::cout<<"Fns with all default arguments"<<std::endl;
    std::cout<<sum2()<<std::endl;
    std::cout<<sum2(10)<<std::endl;
    std::cout<<sum2(10,20)<<std::endl;
    std::cout<<sum2(10,20,30)<<std::endl;
    std::cout<<sum2(10,20,30,40)<<std::endl;
    return 0;
}
