#include<iostream>

int main(){
    int *ptr;

    try{
        ptr = new int[100];
        puts("Memory allocated successfully.\n");
    } catch(...){
        puts("Memory allocation failed.\n");
    }

    delete [] ptr;

    return 0;
}
