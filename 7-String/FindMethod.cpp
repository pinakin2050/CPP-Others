#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string pattern("ABCD");

    // find returns index where pattern is found.
	// If pattern is not there it returns predefined
	// constant npos whose value is -1
    if(s1.find(pattern) != string::npos)
        cout<<"Pattern found at index "<<s1.find(pattern);
    else
        cout<<"Pattern not found";
    return 0;
}
