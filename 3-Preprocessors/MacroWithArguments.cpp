#include<iostream>
#define MULTABLE(a,b) (a*b)

int main()
{
    int n1=0;
    while(true)
    {
        std::cout<<"Enter Number to print its table:";
        std::cin>>n1;
        for(int a=1;a<=10;a++)
        {
            std::cout<<n1<<"X"<<a<<"="<<MULTABLE(n1,a)<<std::endl;
        }
        std::cout<<std::endl;
    }
    return 0;
}
