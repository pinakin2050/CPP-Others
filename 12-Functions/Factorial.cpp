#include<iostream>

int factorial(int);

int main(){
    int n=5;
    std::cout << "Factorial of " << n << ": " << factorial(n);
    return 0;
}

int factorial(int n){
    if(n>1){
        return n * factorial(n - 1);
    } else{
        return 1;
    }
}
