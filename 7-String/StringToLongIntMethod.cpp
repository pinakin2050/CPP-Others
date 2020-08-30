#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    std::string dec_str="9090007700";
    std::cout<<"Decimal N0:"<<std::stol(dec_str,nullptr,10)<<std::endl;

    std::string hex_str="AAAAAFFFF";
    std::cout<<"Hexadecimal N0:"<<std::stol(hex_str,nullptr,16)<<std::endl;

    std::string bin_str="10100111000111";
    std::cout<<"Binary N0:"<<std::stol(bin_str,nullptr,2)<<std::endl;

    std::string dec_str="9090007700";
    std::cout<<"Decimal N0:"<<std::stol(str,nullptr,0)<<std::endl;

    return 0;
}
