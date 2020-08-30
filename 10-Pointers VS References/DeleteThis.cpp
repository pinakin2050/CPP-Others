#include<iostream>
using namespace std;

class A
{
int x;
public:
	A() { x = 0;}
	void fun() {
	delete this;

	/* Invalid: Undefined Behavior */
	cout<<x;
	}
};
 int main()
 {
     A o;
     o.fun();
     return 0;
 }
