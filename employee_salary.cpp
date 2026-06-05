#include <iostream>
using namespace std; //for cout<< and cin>> commands
#include <iomanip> //for precision setting command
#include <string> //for getline() command

//Function prototype
struct Employee {
    string name;
    double basicSalary;
    int overtimeHours;
};

//Function to get employee details
void getEmployeeDetails(Employee &emp) {
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter basic salary: ";
    cin >> emp.basicSalary;
    cout << "Enter overtime hours: ";
    cin >> emp.overtimeHours;
}

//Function to calculate overtime pay
double calculateOvertimePay(int overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

//Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

//Function to print out the payslip
void displayPayslip(const Employee &emp, double overtimePay, double netSalary) {
    cout << "\n===== Employee Payslip =====\n";
    cout << "Name: " << emp.name << "\n";
    cout << fixed << setprecision(2); //sets precision to 2dp
    cout << "Basic Salary: $" << emp.basicSalary << "\n";
    cout << "Overtime Hours: " << emp.overtimeHours << "\n";
    cout << "Overtime Pay: $" << overtimePay << "\n";
    cout << "Net Salary: $" << netSalary << "\n";
    cout << "============================\n";
}

//Main function calls other function in a logical sequence
int main() {
    Employee emp;
    const double RATE_PER_HOUR = 20.0;

    getEmployeeDetails(emp);

    double overtimePay = calculateOvertimePay(emp.overtimeHours, RATE_PER_HOUR);
    double netSalary = calculateNetSalary(emp.basicSalary, overtimePay);

    displayPayslip(emp, overtimePay, netSalary);

    return 0;
}
