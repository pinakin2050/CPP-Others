#include<iostream>
#include<cstdlib>

using namespace std;
void fns1()
{
    std::cout<<"Exit fns 1."<<std::endl;
}

void fns2()
{
    std::cout<<"Exit fns 2."<<std::endl;
}

int main()
{
    //registering exit fns
    at_quick_exit(fns1);
    at_quick_exit(fns2);

    quick_exit(0);
    return 0;
}
