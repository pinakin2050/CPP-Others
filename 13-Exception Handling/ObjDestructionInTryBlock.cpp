#include<iostream>

class ObjDestructionInTryBlock
{
public:
    ObjDestructionInTryBlock(){std::cout<<"Constructor called."<<std::endl;}
    ~ObjDestructionInTryBlock(){std::cout<<"Destructor called."<<std::endl;}
};

int main()
{
    try{
        ObjDestructionInTryBlock obj1;
        throw 10;
    }
    catch(int a){
        std::cout<<"Caught"<<std::endl;
    }
    return 0;
}
