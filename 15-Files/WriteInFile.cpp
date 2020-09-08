#include<iostream>

int main(){
    const char* filename = "FileToWrite.txt";
    const char* information = "This is the dummy content. Some random gibberish blah blah blah.";
    FILE* fh = fopen(filename, "w");

    for (int i=0; i<50; i++){
        fputs(information, fh);
    }

    fclose(fh);

    return 0;
}
