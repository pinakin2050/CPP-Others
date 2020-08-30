#include<iostream>

class InlineFnsWithClass
{
    int a,b,add,sub,mul;
    float div;

    public:
        void set();
        void sum();
        void substraction();
        void multiplication();
        void division();
};

inline void InlineFnsWithClass :: set()
{
    std::cout<<"Enter first number:"<<std::endl;
    std::cin>>a;
    std::cout<<"Enter second number:"<<std::endl;
    std::cin>>b;
}

inline void InlineFnsWithClass :: sum()
{
    std::cout<<"Sum is "<<a+b<<std::endl;
}

inline void InlineFnsWithClass :: substraction()
{
    std::cout<<"Substraction is "<<a-b<<std::endl;
}

inline void InlineFnsWithClass :: multiplication()
{
    std::cout<<"Multiplication is "<<a*b<<std::endl;
}

inline void InlineFnsWithClass::division()
{
    std::cout<<"Division is "<<a/b<<std::endl;
}

int main()
{
    InlineFnsWithClass o;
    std::cout<<"Using Inline Function:"<<std::endl;
    o.set();
    o.sum();
    o.substraction();
    o.multiplication();
    o.division();
    return 0;
}
