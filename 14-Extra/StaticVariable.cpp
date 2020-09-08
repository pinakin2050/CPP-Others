#include<iostream>

int lifeUp(){
    static int life=3;
    return ++life; //pre-increment is faster than post-increment
}
int main(){
    int life=3;
    std::cout << "Your starting game life is: " << life << std::endl;

    life=lifeUp();
    std::cout << "Your updated game life is: " << life << std::endl;

    life=lifeUp();
    std::cout << "Your updated game life is: " << life << std::endl;

    return 0;
}
