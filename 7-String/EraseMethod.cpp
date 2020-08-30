#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1("This string is being erased.");
    cout<<"String before erasing is: "<<s1<<endl;

    // erase(a, b) deletes b characters at index a
    s1.erase(4,7);
    cout<<"String after erasing few characters is: "<<s1<<endl;

    // iterator version of erase
    s1.erase(s1.begin()+1,s1.end()-7);
    cout<<"String after erasing few more characters is: "<<s1<<endl;
    return 0;
}
