#include<iostream>

class ChainOfFnsCall{
private:
    int x,y;
public:
    ChainOfFnsCall& setX(int x=0){
        this->x=x;
        return *this;
    }

    ChainOfFnsCall& setY(int y=0){
        this->y=y;
        return *this;
    }

    void print(){
        std::cout<<"X="<<x<<" Y="<<y<<std::endl;
    }
};

int main()
{
    int x=10,y=20;
    ChainOfFnsCall t;
    t.setX(x).setY(y).print();
    return 0;
}
