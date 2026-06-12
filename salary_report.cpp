#include <iostream>  //for cin>> and cout<< commands
using namespace std;
#include <string>  //for getline() command

int main() {
    //Declare variables
    string employee_names[5];
    int basic_salaries[5];
    float bonuses[5];
    float total_salaries[5];

    for(int i = 0; i < 5; i++) {   //initiate loop to store details for 5 employees
        cout << "Enter the employee's name: ";
        getline(cin >> ws, employee_names[i]);
        cout << "Enter the employee's basic salary: ";
        cin >> basic_salaries[i];
    }

    for(int i = 0; i < 5; i++) {   //initiate loop to calculate total salary for each employee
        bonuses[i] = 0.05 * basic_salaries[i];
        total_salaries[i] = basic_salaries[i] + bonuses[i];
    }

    for(int i = 0; i < 5; i++) {   //initiate loop to display report for each employee
        cout << endl << "================================" << endl;
        cout << "Employee " << (i + 1) << ": " << employee_names[i] << endl;
        cout << "Basic salary: Ksh " << basic_salaries[i] << endl;
        cout << "Bonus: Ksh " << bonuses[i] << endl;
        cout << "Total salary: Ksh " << total_salaries[i] << endl;
        cout << "================================" << endl;
    }

    return 0;
}
