#include<iostream>

int main(){
    char api_val='7';

    try{
        std::cout << "Trying to use API value." << std::endl;
        std::cout << "Did some testing with API value." << std::endl;
        throw api_val;
    } catch(int i){
        std::cout << "Integer exception handled." << std::endl;
    } catch(float f){
        std::cout << "float exception handled." << std::endl;
    } catch(...){
        std::cout << "Something went wrong!" << std::endl;
    }
    std::cout << "Keep on moving with rest of the course.";

    return 0;
}
