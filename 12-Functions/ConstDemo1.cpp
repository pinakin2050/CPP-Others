#include<iostream>

class ConstDemo
{
    int value;

    public:
        ConstDemo(int v=0)
        {
            value=v;
        }
    int getValue() const
    {
        // value=134; Writing this will generate an error.
        return value;
    }
};

int main()
{
    ConstDemo d(77);
    std::cout<<d.getValue();
    return 0;
}
