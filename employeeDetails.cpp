#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class Employee {
    private:
        string employeeName;
        int employeeID;
        float basicSalary;

    public:
        void setEmployeeDetails() {
            cout<<"Enter the following details:"<<endl;
            cout<<"Employee name: ";
            getline(cin>>ws, employeeName);
            cout<<"Employee ID: ";
            cin>>employeeID;
            cout<<"Basic salary: Ksh ";
            cin>>basicSalary;
        }

        string getEmployeeName() {
            return employeeName;
        }

        int getEmployeeID() {
            return employeeID;
        }

        float getBasicSalary() {
            return basicSalary;
        }

        float calculateNetSalary() {
            float netSalary;

            netSalary = basicSalary + (basicSalary * 0.01f);

            return netSalary;
        }

        void displayEmployeeDetails() {
            cout<<"\n============Employee details============"<<endl;
            cout<<"Employee name: "<<getEmployeeName()<<endl;
            cout<<"Employee ID: "<<getEmployeeID()<<endl;
            cout<<"Basic salary: Ksh "<<fixed<<setprecision(2)<<getBasicSalary()<<endl;
            cout<<"Net salary: Ksh "<<fixed<<setprecision(2)<<calculateNetSalary()<<endl;
            cout<<"========================================";
        }
};

int main() {
    Employee manager;

    manager.setEmployeeDetails();
    manager.displayEmployeeDetails();

    return 0;
}
