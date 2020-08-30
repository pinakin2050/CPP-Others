#include<iostream>

class Base{
public:
    virtual void fns() const{
        std::cout<<"In Base Class."<<std::endl;
    }
};

class Derived:public Base{
public:
    virtual void fns() const{
        std::cout<<"In Derived Class."<<std::endl;
    }
};

void show(Base &b){
    b.fns();
}

int main()
{
    Base b;
    Derived d;
    show(b);
    show(d);
    return 0;
}
