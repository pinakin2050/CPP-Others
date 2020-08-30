#include <iostream>
using namespace std;

int main()
{
    int a=7;
    int &ref=a;
    ref=4;
    cout<<"a:"<<a<<endl;
    a=7;
    cout<<"ref:"<<ref;

    return 0;
}
