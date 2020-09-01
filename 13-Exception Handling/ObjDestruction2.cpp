#include<iostream>
class Test1
{
    static int cnt;
    int n;
public:
    Test1(){
        cnt++;
        n=cnt;
        std::cout<<"Constructing object "<<n<<std::endl;
        if(n==4)
            throw n;
    }
    ~Test1(){ std::cout<<"Destructing object "<<n<<std::endl;}
};
int Test1::cnt=0;

int main()
{
    try{
        Test1 ar[5];
    }catch(int i){
        std::cout<<"Caught "<<i<<std::endl;
    }
    return 0;
}
