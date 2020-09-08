#include<iostream>

using namespace std;

int main(){
    int score=100;
    int *ptr=&score;
    printf("Value of Score: %d\n",score);
    printf("Pointer value: %p\n",ptr);

    int &refScore=score;
    refScore=300;

    printf("Value of Score: %d\n",score);
    printf("Pointer value: %p\n",ptr);

    return 0;
}
