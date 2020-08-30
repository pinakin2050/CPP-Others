#include<iostream>
#include<ctime>

int main()
{
    time_t time_ptr;
    time(&time_ptr);

    // OR time_ptr=time(NULL);

    tm* tm_local=localtime(&time_ptr);

    std::cout<<"Current local time is "
             <<tm_local->tm_mday<<" "
             <<tm_local->tm_mon<<" "
             <<tm_local->tm_hour<<":"
             <<tm_local->tm_min<<":"
             <<tm_local->tm_sec;
    return 0;
}
