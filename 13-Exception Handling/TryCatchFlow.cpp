#include<iostream>

int main()
{
    int x=-1;

    try{
        std::cout<<"Inside try block"<<std::endl;
        if(x<0){
            throw x;
            std::cout<<"This will never execute.";
        }
    }
    catch(int a){
        std::cout<<"Exception caught."<<std::endl;
        std::cout<<"After catch(will execute)"<<std::endl;
    }
    std::cout<<"After catch block (This will execute).";
    return 0;
}
