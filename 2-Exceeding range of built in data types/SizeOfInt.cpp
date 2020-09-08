#include<iostream>
#include<cstdint> //Use it to remove int variable size ambiguity that occurs in different systems.

using namespace std;

int main(){
    cout << "short int: " << sizeof(short int) << endl;
    printf("Int: %ld",sizeof(int));
    cout << "long int: " << sizeof(long int) << endl;
    cout << "long long int: " << sizeof(long long int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "int8_t: " << sizeof(int8_t) << endl;    //this will remove size difference on different platform.
    cout << "int16_t: " << sizeof(int16_t) << endl; //this will remove size difference on different platform.
    cout << "int32_t: " << sizeof(int32_t) << endl; //this will remove size difference on different platform.
    cout << "int64_t: " << sizeof(int64_t) << endl; //this will remove size difference on different platform.

    int hex_int = 0x11;     //To write value in hex start it with 0x
    int bin_int = 0b000101100; //To write value in binary start it with 0b

    cout << "Value of hex_int: " << hex_int << endl;
    cout << "Value of bin_int: " << bin_int << endl;

    return 0;
}
