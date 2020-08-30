#include<iostream>
#include<cmath>

int main()
{
    float n;
    std::cout<<"Enter number to find its floor and ceil:";
    std::cin>>n;

    std::cout<<"Floor of "<<n<<" is "<<floor(n)<<std::endl;
    std::cout<<"Ceil of "<<n<<" is "<<ceil(n)<<std::endl;

    return 0;
}
