#include <iostream>
using namespace std;
#include <string>

class Employee {
    private:
        string name;
        int salary;

    public:
        void setEmployeeDetails(string n, int s) {
            name = n;
            salary = s;
        }

        string getEmployeeName() {
            return name;
        }

        int getEmployeeSalary() {
            return salary;
        }

        void displayEmployeeDetails() {
            cout<<"Name : "<<getEmployeeName()<<endl;
            cout<<"Salary: Ksh "<<getEmployeeSalary();
        }
};

int main() {
    Employee emp;

    emp.setEmployeeDetails("Emmanuel", 500000);
    emp.displayEmployeeDetails();

    return 0;
}
