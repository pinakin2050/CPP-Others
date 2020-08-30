#include<iostream>

class Test
{
private:
    int x;
public:
    Test(int x){
        this->x=x;
    }
    void getX()
    {   std::cout<<"X="<<x;    }
};

int main()
{
    Test t(7);
    t.getX();
    return 0;
}
