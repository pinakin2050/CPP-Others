#include<iostream>

class ConstDemo2
{
    int value;
    public:
        ConstDemo2(int v=0)
        {
            value=v;
        }

    int getValue()
    {   return value;   }

    void printValue() const
    {
        std::cout<<"Value is: "<<value<<std::endl;
    }
};

int main()
{
    const ConstDemo2 o1(77);
    ConstDemo2 o2(134);
    o1.printValue();
    o2.printValue();
    int a;
    //a=o1.getValue(); This line will throw error.
    std::cout<<"Value of a:"<<a;
    return 0;
}
