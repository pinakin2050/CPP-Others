#include<iostream>
#include<typeinfo>

std::string API_call(){
    return "Some Data";
}

int AnotherAPI_call(){
    return 5;
}

int main(){
    auto response = API_call();
    std::cout << "API Response: " << response << std::endl;

    if(typeid(response) == typeid(std::string))
        std::cout << "Both types are String." << std::endl;

    auto resp = AnotherAPI_call();
    std::cout << "\nAnother API Response: " << resp << std::endl;

    if(typeid(resp) == typeid(int))
        std::cout << "Both types are Integer." << std::endl;

    return 0;
}
