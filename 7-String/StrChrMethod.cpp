#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[]="I love Aishani alot";
    char *pos=strchr(s1,'A');
    cout<<pos<<endl;
    cout<<pos-s1+1<<endl;
    char s2[]="/home/cpp/sample";
    cout<<s2<<endl;
    int len=strlen(s2);
    pos=strchr(s2,'/');
    *pos='\0';
    cout<<s2;
    return 0;
}
