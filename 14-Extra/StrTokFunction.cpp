#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[]="Aishani-Loves-Pinakin-So-Much";
    char *token=strtok(str1,"-");
    while(token != NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"-");
    }
    return 0;
}
