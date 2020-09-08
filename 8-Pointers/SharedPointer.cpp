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
		//shared_ptr<User> ptr = new User();  //Not allowed.
		//shared_ptr<User> ptr(new User()); //Non fav. way of developers.
		shared_ptr<User> sp = make_shared<User>();
		sp->testFns();

		shared_ptr<User> copySp = sp; //This is allowed bcz it's a shared pointer.
		copySp->testFns();
	}
	cout << "Outside of the scope of unique pointer." << endl;

	return 0;
}
