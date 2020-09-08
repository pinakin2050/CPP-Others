#include<iostream>
#include "sum.h"

int main(){
    int v1 = 4, v2 = 5;
    float f1 = 12.11, f2 = 13.5;

    std::cout << "Sum of integers: " << sum(v1,v2) << std::endl;
    std::cout << "Sum of floats: " << sum(f1,f2) << std::endl;
    //std::cout << "Sum of float and int: " << sum(v1,f1) << std::endl; won't wprk for this one

    return 0;
}
