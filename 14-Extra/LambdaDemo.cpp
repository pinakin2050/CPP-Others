#include<iostream>

int main() {
	//Using parenthesis at the end to execute the lambda cuz we can't do it later by referring it as it doesn't have any name.
	[] { std::cout << "This is a lambda." << std::endl; }();

	//We can use lambda when we want to treat fns as a variable.
	auto sum = [](auto a, auto b) { return a + b; };	//This is now a generalized lambda

	std::cout << "Sum of 2 & 3: " << sum(2, 3) << std::endl;
	std::cout << "Sum of 11.8 & 7: " << sum(11.8, 7) << std::endl;

	std::string s1 = "abc", s2 = "def";
	std::cout << "Sum of s1 & s2: " << sum(s1, s2) << std::endl;
	//std::cout << "Sum of Abc & 7: " << sum(s1, 7) << std::endl;	//Won't work

	return 0;
}
