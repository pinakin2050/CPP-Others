#include<iostream>

int main()
{
    if(1)
    {
        label_1: std::cout<<"Hello ";
        goto label_2;
    }
    else
    {
        goto label_1;
        label_2: std::cout<<"Geeks"<<std::endl;
    }

    if(0)
    {
        label_3: std::cout<<"Hello ";
        goto label_4;
    }
    else
    {
        goto label_3;
        label_4: std::cout<<"Geeks";
    }
    return 0;
}
