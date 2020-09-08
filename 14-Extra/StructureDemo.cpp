#include<iostream>

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};
int main(){
    User vegeta = {001, "Vegeta", "vegeta@dbz.com", 3};
    User goku = {002, "Goku", "goku@dbz.com", 5};
    User *ptr = &goku;

    std::cout << "Details of " << vegeta.name << std::endl;
    std::cout << "Email: " << vegeta.email << std::endl;
    std::cout << "Total Courses: " << vegeta.course_count << std::endl;

    std::cout << "\nDetails of " << ptr->name << std::endl;
    std::cout << "Email: " << ptr->email << std::endl;
    std::cout << "Total Courses: " << ptr->course_count << std::endl;

    ptr->email = "kakarot@dbz.com"; //Though email is const it gets changed bcz we have made pointer const not the values that gets stored inside.
    std::cout << "\nUpdated email of " << ptr->name << " is " << ptr->email;
    return 0;
}
