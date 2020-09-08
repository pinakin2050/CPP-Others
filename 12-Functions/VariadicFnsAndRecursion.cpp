#include<iostream>
//This fns will serve as an exit strategy bcz for last parameter this will get call
template <typename T>
void func(T t){
    std::cout << "Func 1: " << t << std::endl;
}

template <typename T, typename... Args>
void func(T t, Args... args){
    std::cout << "Func 2: " << t << std::endl;
    func(args...); // Using recursion
}

int main(){
    func(1,2,7.7,"Pinakin","Aishani");
    return 0;
}
