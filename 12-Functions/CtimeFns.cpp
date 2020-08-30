#include<iostream>
#include<time.h>

int main()
{
    time_t time_ptr;
    time(&time_ptr);
    std::cout<<"Current time="<<ctime(&time_ptr);
    return 0;
}
