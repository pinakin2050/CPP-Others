#include<iostream>
//This will flush the buffer after reading 1024 characters
constexpr int MAXBUFFER=1024;  //constexpr is just like #define. But it is commonly used.

int main(){
    const char* filename = "FileToRead.txt";
    FILE* fh = fopen(filename, "r");

    char buf[MAXBUFFER]; //Need this to read file content.

    while(fgets(buf,MAXBUFFER,fh)){
        fputs(buf,stdout);
    }
    fclose(fh);

    return 0;
}
