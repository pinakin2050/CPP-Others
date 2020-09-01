#include<iostream>

int main()
{
    try{
        throw 10;
    }
    catch(char *c){
        std::cout<<"Caught.";
    }
    catch(...){ //Catch All block
        std::cout<<"Default Exception caught.";
    }
    return 0;
}
