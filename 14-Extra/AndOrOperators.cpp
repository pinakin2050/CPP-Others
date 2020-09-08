#include<iostream>

int main(){
    bool isFbUser = true;
    bool isGoogleUser = true;
    bool isAdmin = true;

    if((isFbUser || isGoogleUser) && isAdmin){
        std::cout << "Admin access provided" << std::endl;
    } else{
        std::cout << "No admin access provided." << std::endl;
    }
    return 0;
}
