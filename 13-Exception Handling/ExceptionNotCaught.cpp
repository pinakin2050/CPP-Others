#include<iostream>

int main()
{
    try{
        throw 'A';
    }
    catch(int a){
        std::cout<<"Caught.";
    }
    return 0;
}
