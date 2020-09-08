#include<iostream>
#include<memory>

using namespace std;

class User {
public:
	User() { cout << "User created." << endl; }

	~User() { cout << "User deleted." << endl; }

	void testFns() { cout << "Test function called." << endl; }

};
int main() {
	{	//This is called empty scope.
		// unique_ptr<User> ptr = new User(); //Not allowed
		//unique_ptr<User> ptr(new User());	 //This is allowed but it's no fav. way of developers.
		unique_ptr<User> pinakin = make_unique<User>();
		pinakin->testFns();

        //unique_ptr<User> ptr = pinakin; //This is not allowed that's why it's called unique pointer.
	}
	cout << "Outside of the scope of unique pointer." << endl;

	return 0;
}
