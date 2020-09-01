#include<iostream>
class Test1
{
public:
    Test1(){  std::cout<<"Constructing an obj of Test1. "<<std::endl;  }
    ~Test1(){  std::cout<<"Destructing an obj of Test1. "<<std::endl;  }
};

class Test2
{
public:
    Test2(){
        std::cout<<"Constructing an obj of Test2. "<<std::endl;
        throw 10;
    }
    ~Test2(){  std::cout<<"Destructing an obj of Test2. "<<std::endl;  }
};

int main(){
    try{
        Test1 t1;
        Test2 t2;
    }catch(int i){
        std::cout<<"Caught "<<i<<std::endl;
    }
    return 0;
}
