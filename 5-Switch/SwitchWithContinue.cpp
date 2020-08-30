#include<iostream>
#define print std::cout
#define newline std::endl

int main()
{
    int i=0;
    print<<"Enter your choice between 1 to 5:";
    std::cin>>i;

    switch(i)
    {
        case 1:print<<"You chose 1"<<newline;
               continue;

        case 2:print<<"You chose 2"<<newline;
               continue;

        default: print<<"You are stupid.";
    }
}
