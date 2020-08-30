#include<iostream>
#include<ctime>
#include<math.h>

int main()
{
    clock_t req_time;
    float a;
    req_time=clock();

    for(int i=0;i<200000;i++)
        a=log(i*i*i*i);

    req_time=clock()-req_time;
    std::cout<<"Time required for multiplication:"
             <<(float)req_time/CLOCKS_PER_SEC<<" Seconds"<<std::endl;
    req_time=clock();
    for(int i=0;i<200000;i++)
        a=log(pow(i,4));

    req_time=clock()-req_time;
    std::cout<<"Time required for Power:"
             <<(float)req_time/CLOCKS_PER_SEC<<" Seconds"<<std::endl;

}
