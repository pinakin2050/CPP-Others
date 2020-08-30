#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("ABCDEFGHIJKLMNOP");
    cout<<"String before appending:"<<s1<<endl;
    s1.append("QRSTUVWXYZ");
    cout<<"String after appending:"<<s1<<endl;

    string s2("1234Appended String");
    s1.append(s2,4,s2.length()-1);
    cout<<"String after another append method:"<<s1<<endl;


    return 0;
}
