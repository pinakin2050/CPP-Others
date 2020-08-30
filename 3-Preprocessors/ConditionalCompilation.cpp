#include<iostream>
#define PI 3.14
//#define PLANK 7

int main()
{
    #ifdef PI
        std::cout<<"PI macro is defined";
    #endif

    #ifdef PLANK
        std::cout<<"PLANK macro is defined";
    #endif
    return 0;
}
