#include<iostream>
#include<cmath>

int main()
{
    float f=2.777;
    std::cout<<"Value of f:"<<f<<std::endl;
    std::cout<<"Round off value of f:"<<nearbyint(f)<<std::endl;

    double d=1341.7767;
    std::cout<<"Value of d:"<<d<<std::endl;
    std::cout<<"Round off value of d:"<<nearbyint(d)<<std::endl;

    long double ld=134134.7777;
    std::cout<<"Value of ld:"<<ld<<std::endl;
    std::cout<<"Round off value of ld:"<<nearbyint(ld)<<std::endl;

    return 0;
}
