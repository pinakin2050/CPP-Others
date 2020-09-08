#include<iostream>

using namespace std;

int main(){
    int ar[4] = {1,2,3,4};
    cout << "Value of ar: " << ar << endl;
    cout << "Value of ar[0]: " << ar[0] << endl;
    cout << "Value of ar[1]: " << ar[1] << endl;

    int *ap = ar;
    ap++;
    *ap=7;
    cout << "Value of ar[1]: " << *ap;

    return 0;
}
