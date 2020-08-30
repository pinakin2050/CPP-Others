#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1("This string is being replaced");
    cout<<"String before replacing is: "<<s1<<endl;

    // replace(a, b, str) replaces b characters from a index by str
    s1.replace(15,5,"now");
    cout<<"String after replacing is: "<<s1<<endl;
    return 0;
}
