#include<iostream>

class Pet{
public:
        virtual std::string getDescription() const {
            return "This is Pet class.";
        }
};

class Dog:public Pet{
public:
        virtual std::string getDescription() const{
            return "This is Dog class.";
        }

};

void description(const Pet &p){
    std::cout<<p.getDescription()<<std::endl;
}

int main(){
    Dog d;
    description(d);
    return 0;
}
