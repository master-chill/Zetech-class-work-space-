#include <iostream> //for cout<< and cin>> commands
#include <iomanip> //for precision setting command
#include <string> //for getline() command
using namespace std;

//Function for fetching customer details
void getCustomerDetails(string &customerName, int &unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

//Function for calculating the water bill
double calculateBill(int unitsConsumed, double ratePerUnit) {
    return unitsConsumed * ratePerUnit;
}

//Function for applying discount based on bill amount
double applyDiscount(double billAmount, double &discountAmount) {
    if (billAmount > 100 * 2.5) {
        discountAmount = billAmount * 0.10;
        return billAmount - discountAmount;
    }
    discountAmount = 0.0;
    return billAmount;
}

//Function to print the water bill statement
void displayBill(const string &customerName, int unitsConsumed, double billAmount,
                 double discountAmount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\nWater Bill Statement\n";
    cout << "---------------------\n";
    cout << "Customer Name      : " << customerName << '\n';
    cout << "Units Consumed     : " << unitsConsumed << '\n';
    cout << "Total Bill         : Rs. " << billAmount << '\n';
    cout << "Discount           : Rs. " << discountAmount << '\n';
    cout << "Amount Payable     : Rs. " << finalAmount << '\n';
}

//Main function calls the other functions in a logical sequence
int main() {
    string customerName;
    int unitsConsumed = 0;
    const double ratePerUnit = 2.5;

    getCustomerDetails(customerName, unitsConsumed);
    double billAmount = calculateBill(unitsConsumed, ratePerUnit);
    double discountAmount = 0.0;
    double finalAmount = applyDiscount(billAmount, discountAmount);
    displayBill(customerName, unitsConsumed, billAmount, discountAmount, finalAmount);

    return 0;
}
