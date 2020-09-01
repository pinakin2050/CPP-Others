#include<iostream>
class Base{};
class Derived:public Base{};

int main(){

    Derived d;
    try{
        throw d;
    }
    catch(Base b){
        std::cout<<"Caught Base class exception.";
    }
    catch(Derived d){
        std::cout<<"Caught Derived class exception.";
    }
    return 0;
}
