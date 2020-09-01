#include<iostream>

int main()
{
    try{
        try{
            throw 10;
        }
        catch(int x){
            std::cout<<"Handled exception partially."<<std::endl;
            throw;
        }
    }
    catch(int y){
        std::cout<<"Handled remaining exception.";
    }
    return 0;
}
