#include<iostream>
#include<string>

template<typename T>
void swap(T& t1, T& t2) {
	/*T temp;			//In this case we are copying the content of a var in temp var which is like taking up double space. So in case of large object we
	temp = t1;			// will end up wasting a lot of space in copying so to resolve this we can use move semantics.
	t1 = t2;
	t2 = temp;*/

	T temp = std::move(t1);
	t1 = std::move(t2);
	t2 = std::move(temp);
}

std::string printMe() {
	return "I am print";
}

int main() {
	int n1 = 10, n2 = 20;
	float f1 = 3.5, f2 = 4.5;
	std::string s1 = "First", s2 = "Second";

	swap(n1, n2);
	std::cout << "n1: " << n1 << "\tn2: " << n2 << std::endl;

	swap(f1,f2);
	std::cout << "f1: " << f1 << "\tf2: " << f2 << std::endl;

	swap(s1, s2);
	std::cout << "s1: " << s1 << "  s2: " << s2 << std::endl;

	//std::string s1 = printMe(); //Here we are copying the ref of fns into var so we may end up using double space. This can be solved by move semantics.
	std::string&& s3 =  printMe();

	//std::cout << "Value of s2: " << s2 << std::endl;
	return 0;
}
