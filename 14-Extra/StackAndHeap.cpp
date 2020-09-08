#include<iostream>

struct User{
    const int id;
    int age;

    User() : id(001),age(0){}
};

int main(){
    //Stack
    int var = 20;
    User pinakin;
    // -------------------------------
    int *int_ptr;
    User *struct_ptr;
    //Heap
    try{
        int_ptr = new int;
        struct_ptr = new User();
    } catch(...){
        std::cout << "Something went wrong while allocating memory." << std::endl;
    }
    delete int_ptr;
    delete struct_ptr;
    return 0;
}
