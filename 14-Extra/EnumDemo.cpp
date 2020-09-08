#include<iostream>

enum MsOffice{
    BOLD,
    ITALIC,
    UNDERLINE,
    CROSSED
};

enum NotAutoIncremented{
    THREE = 3,
    SIX = 6,
    NINE = 9
};

enum CastedEnum : uint8_t{ //You can cast enum to save space. AS they behave like int you can type cast it to lower types to save space.
    P=29,
    Q=67,
    R=21
};
int main(){
    int myAttribute = BOLD;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = ITALIC;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = CROSSED;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = THREE;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = SIX;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = P;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    myAttribute = Q;
    std::cout << "Value of attribute: " << myAttribute << std::endl;

    return 0;
}
