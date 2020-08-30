#include<iostream>

void startUpFunction();
void exitFunction();

void startUpFunction()
{
    std::cout<<"Inside startup function"<<std::endl;
}

void exitFunction()
{
    std::cout<<"Inside exit function.";
}

#pragma startup startUpFunction
#pragma exit exitFunction
int main()
{
    void startUpFunction();
    void exitFunction();
    std::cout<<"Inside main()";
    return 0;
}
