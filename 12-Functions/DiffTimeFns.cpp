#include<iostream>
#include<ctime>

int main()
{
    time_t starting,ending;

    std::cout<<"-----------STARTED-----------"<<std::endl;
    time(&starting);
    for(int i=0;i<20000;i++)
    {
        for(int j=0;j<20000;j++);
    }

    for(int i=0;i<20000;i++)
    {
        for(int j=0;j<20000;j++);
    }

    for(int i=0;i<20000;i++)
    {
        for(int j=0;j<20000;j++);
    }
    time(&ending);
    std::cout<<"-----------ENDED-----------"<<std::endl;
    std::cout<<"Total Execution time="<<difftime(ending,starting)<<" Seconds";
    return 0;
}
