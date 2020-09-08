#include<iostream>
#define LCOINT int16_t // Good way to optimize the memory usage. Don't use macros a lot.
int main(){
    LCOINT a = 100;
    std::cout << "Value of a: " << a;
    return 0;
}
