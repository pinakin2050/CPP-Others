#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> color;

    color.push_back("Red");
    color.push_back("Blue");
    color.push_back("Black");
    color.push_back("Green");
    for(int i=0;i<4;i++)
    {
        cout<<color[i]<<endl;
    }
    return 0;
}
