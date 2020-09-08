#include<iostream>

int main(){
    char my_str[] = "Hello"; // this is equivalent to {'H','e','l','l','o',0}
    void *p = my_str;

    std::cout << "First type of looping:" << std::endl;
    for(int i=0; my_str[i] != 0; i++)
        std::cout << my_str[i] <<" ";

    std::cout << "\n\nSecond type of looping:" << std::endl;
    for(int i=0; my_str[i]; i++)    //my_str[i] will evaluate true as any value other than 0 is true so loop will work for all values except the last one i.e zero.
        std::cout << my_str[i] <<" ";

    std::cout << "\n\nThird type of looping:" << std::endl;
    for(char *ptr=my_str; *ptr != 0; ptr++)
        std::cout << *ptr <<" ";

    std::cout << "\n\nFourth type of looping:" << std::endl;
    for(char i:my_str){
        if(i == 0)break; //To break loop when 0 comes else loop will print blank char on console.
        std::cout << i << " ";
    }

    return 0;
}
