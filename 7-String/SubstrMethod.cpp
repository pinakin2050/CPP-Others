#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1("Aishani Patnaik");
    	// substr(a, b) function returns a substring of b length
	// starting from index a
	cout<<"Pinakin loves "<<s1.substr(0,7)<<endl;
	// if second argument is not passed, string till end is
	// taken as substring
    cout<<"Pinakin loves "<<s1.substr(0);
    return 0;
}
