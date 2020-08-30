#include <iostream>
#include <string>
using namespace std;

string returnFloatingPart(string s1)
{
    if(s1.find(".")!=string::npos)
        return s1.substr(s1.find(".")+1,s1.length()-1);
    else
        return "Not found";
}

string onlyContainsDigits(string s2)
{
    int i=0;
    while(i<s2.length())
    {
        if(s2.at(i)<=0 && s2.at(i)>=9)
        {
            return "Doesn't contains only numbers.";
        }
        i++;
    }
    return "Contains only numbers.";
}

string replaceSpacesWith20(string url)
{
    int i=0;
    while((i=url.find(" ",i)) != string::npos)
    {
        url.replace(i,1,"%20");
        i+=3;
    }
    return url;
}

int main()
{
    string s1("123.456");
    cout<<"The floating part is: "<<returnFloatingPart(s1)<<endl;

    string s2("1234");
    cout<<onlyContainsDigits(s2)<<endl;

    string url("www.demo url for testing.com");
    cout<<replaceSpacesWith20(url)<<endl;

    return 0;
}
