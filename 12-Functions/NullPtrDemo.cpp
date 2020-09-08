#include<iostream>

void printValue(int val){
    std::cout << "Value is " << val << std::endl;
}

void printValue(double val){
    std::cout << "Value is " << val << std::endl;
}
void printValue(int *val){
    std::cout << "Value is " << val << std::endl;
}

int main(){
    printValue(NULL);//This will call fns with int parameter but not pointer.
    printValue(nullptr); // This will call fns with pointer parameter.
    return 0;
}
