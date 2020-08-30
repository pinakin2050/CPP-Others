#include<iostream>
using namespace std;
class Employee
{
    string name;
    string desig;

    public:

        Employee(string nm,string dsg){
            name=nm;
            desig=dsg;
        }

        string getName() const{
            return name;
        }

        string getDesignation() const{
            return desig;
        }
};

void printEmpDetails(const Employee &emp){
    cout<<"Employee Name:"<<emp.getName()<<endl;
    cout<<"Employee Designation:"<<emp.getDesignation();
}

int main(){
    Employee e("Pinakin","Junior Engineer");
    printEmpDetails(e);
    return 0;
}
