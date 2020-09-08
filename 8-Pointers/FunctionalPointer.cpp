#include<iostream>

void interesting(){
    std::cout << "This method is interesting." << std::endl;
}
int main(){
    void (*ptrToInteresting)() = interesting;

    ptrToInteresting();
    (*ptrToInteresting)();

    return 0;
}
