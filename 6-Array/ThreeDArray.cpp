#include<iostream>

using namespace std;

int main()
{
    int ar[2][3][4]={
                      {{0,1,2,3},{4,5,6,7},{8,9,10,11}},
                      {{12,13,14,15},{16,17,18,19},{20,21,22,23}}
                    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            cout<<"Element at ar["<<i<<"]["<<j<<"]["<<k<<"]:"<<ar[i][j][k]<<endl;
        }
    }
    return 0;
}
