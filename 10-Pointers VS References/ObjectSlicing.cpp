#include<iostream>

class Pet{
public:
        virtual std::string getDescription(){
            return "This is Pet class.";
        }
};

class Dog:public Pet{
public:
        std::string getDescription(){
            return "This is Dog class.";
        }

};

void description(Pet p){
    std::cout<<p.getDescription()<<std::endl;
}

int main(){
    Dog d;
    description(d);
    return 0;
}
