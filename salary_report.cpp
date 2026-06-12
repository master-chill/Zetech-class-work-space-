#include <iostream>
using namespace std;
#include <string>

using namespace std;

int main() {
    string employee_names[5];
    int basic_salaries[5];
    float bonuses[5];
    float total_salaries[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter the employee's name: ";
        getline(cin >> ws, employee_names[i]);
        cout << "Enter the employee's basic salary: ";
        cin >> basic_salaries[i];
    }

    for(int i = 0; i < 5; i++) {
        bonuses[i] = 0.05 * basic_salaries[i];
        total_salaries[i] = basic_salaries[i] + bonuses[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << endl << "================================" << endl;
        cout << "Employee " << (i + 1) << ": " << employee_names[i] << endl;
        cout << "Basic salary: Ksh " << basic_salaries[i] << endl;
        cout << "Bonus: Ksh " << bonuses[i] << endl;
        cout << "Total salary: Ksh " << total_salaries[i] << endl;
        cout << "================================" << endl;
    }

    return 0;
}
