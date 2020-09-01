#include<iostream>

void f1() throw (int){
    std::cout<<"f1() starts."<<std::endl;
    throw 1;
    std::cout<<"f1() ends."<<std::endl;
}

void f2() throw (int){
    std::cout<<"f2() starts."<<std::endl;
    f1();
    std::cout<<"f2() ends."<<std::endl;
}

void f3(){
    std::cout<<"f3() starts."<<std::endl;
    try{
        f2();
    }
    catch(int i){
        std::cout<<"Caught "<<i<<std::endl;
    }
    std::cout<<"f3() ends."<<std::endl;
}

int main(){
    f3();
    return 0;
}
