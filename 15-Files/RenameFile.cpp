#include<iostream>

int main(){
    const char* originalfile = "OriginalFile.txt";
    const char* updatedfile = "UpdatedFile.txt";
    rename(originalfile, updatedfile);

    return 0;
}
