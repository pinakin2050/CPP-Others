#include<iostream>
#include<ctime>
int main()
{
    time_t time_ptr;
    time(&time_ptr);
    std::cout<<"The current time is="
             <<asctime(localtime(&time_ptr));
    /*             or

    time_t time_obj;
    time_t *time_ptr=&time_obj;
    time(time_ptr);
    std::cout<<"The current time is="
             <<asctime(localtime(time_ptr));
    */
    return 0;
}
