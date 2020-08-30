#include<iostream>
#include<tuple>
using namespace std;

tuple<int,int,char> functionTuple(int a,int b)
{
    cout<<"Function Returning a tuple."<<endl;
    return make_tuple(a,b,'A');
}

pair<int,float> functionPair(int c,float d)
{
    cout<<"Function Returning a pair."<<endl;
    return make_pair(c,d);
}

int main()
{
    int a,b;
    char c;

    tie(a,b,c)=functionTuple(3,6);
    cout<<"Unpacked Tuple:"<<" "<<a<<" "<<b<<" "<<c<<endl;

    pair<int,float> p=functionPair(9,3.14);
    cout<<"Unpacked Pair:"<<" "<<p.first<<" "<<p.second;
    return 0;
}
