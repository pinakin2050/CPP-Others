#include<iostream>

 int main()
 {
     void *ptr;
     int a=7;
     float f=7.7;
     ptr=&a;
     std::cout<<"Void to Int Pointer:"<<*((int *)ptr)<<std::endl;
     ptr=&f;
     std::cout<<"Void to Float Pointer:"<<*((float*)ptr)<<std::endl;
     return 0;
 }
