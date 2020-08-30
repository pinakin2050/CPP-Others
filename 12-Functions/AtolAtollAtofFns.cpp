#include<iostream>
#include<ctype.h>

int main()
{
    char s1[]="1234567890";
    long int n1=atol(s1);
    std::cout<<"Num 1 is:"<<n1<<std::endl;

    char s2[]="   123343 456343 789678545 ";
    long long int n2=atoll(s2);
    std::cout<<"Num 2 is:"<<n2<<std::endl;

    char s3[]= "3.145678954567";
    double n3=atof(s3);
    std::cout<<"Num 3 is:"<<n3<<std::endl;
    return 0;
}
