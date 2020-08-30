#include <iostream>
using namespace std;
int main()
{
    //String Constructors

    //Initialization by raw data
    string s1("First String");

    //Initialization by another string
    string s2(s1);

    //initialization with character and number of occurrence
    string s3(7,'#');

    //initialization of string with part of another string
    string s4(s1,4,8);

    //initialization of string by part of another string: iterator version
    string s5(s1.begin(),s1.begin()+5);

    //Assignment operator
    string s6=s5;

    cout<<"S1:"<<s1<<endl;
    cout<<"S2:"<<s2<<endl;
    cout<<"S3:"<<s3<<endl;
    cout<<"S4:"<<s4<<endl;
    cout<<"S5:"<<s5<<endl;
    cout<<"S6:"<<s6<<endl;
    return 0;
}
