#include<iostream>
using namespace std;

int main()
{
    string str1="Hello";
    string str2="World";

    cout<<str1.size()<<endl;
    cout<<str2.length()<<endl;

    str1=str1+str2;
    cout<<str1<<endl;

    str2.append("Geeks");
    cout<<str1<<endl;

    string str3="HelloWorldGeeks";
    if(str1.compare(str3)==0)
        cout<<"Same"<<endl;
    else
        cout<<"Not same"<<endl;

    string sub=str1.substr(10,5);
    cout<<"Substr:"<<sub<<endl;

    str1.insert(10,"For");
    cout<<str1<<endl;

    string target="World";
    if(str1.find(target)!=string::npos)
        cout<<"Match Found"<<endl;
    else
        cout<<"Match Not Found"<<endl;

    str1.replace(5,5,"For");
    cout<<str1<<endl;

    return 0;
}
