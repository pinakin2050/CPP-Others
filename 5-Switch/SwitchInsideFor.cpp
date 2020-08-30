#include<iostream>

int main()
{
    for(int i=1;i<7;i++)
    {
        switch(i)
        {
            case 1: std::cout<<"Case 1."<<std::endl;
                    break;
            case 2: std::cout<<"Case 2."<<std::endl;
                    break;
            case 3: std::cout<<"Case 3."<<std::endl;
                    break;
            case 4: std::cout<<"Case 4."<<std::endl;
                    break;
            case 5: std::cout<<"Case 5."<<std::endl;
                    break;
            default: std::cout<<"It didn't work."<<std::endl;
        }
    }
    return 0;
}
