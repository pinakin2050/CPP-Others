#include<iostream>

using namespace std;

int main()
{
    int ar[2][4]={{0,1,2,3},{4,5,6,7}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"Element at ar["<<i<<"]["<<j<<"]:"<<ar[i][j]<<endl;
        }
    }
    return 0;
}
