#include<iostream>
class Base{};
class Derived:public Base{};

int main(){

    Derived d;
    try{
        throw d;
    }
    catch(Derived d){
        std::cout<<"Caught Derived class exception.";
    }
    catch(Base b){
        std::cout<<"Caught Base class exception.";
    }
    return 0;
}
