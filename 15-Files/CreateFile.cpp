#include<iostream>

int main() {
	const char* originalfile = "OriginalFile.txt";

	FILE* fh = fopen(originalfile,"w");
	fclose(fh);

	return 0;
}
