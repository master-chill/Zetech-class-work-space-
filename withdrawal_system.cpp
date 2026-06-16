#include <iostream>
using namespace std;

int main() {
    // Declare variables to store account balance and withdrawal amount
    double balance;
    double withdrawalAmount;

    // Prompt agent to enter the initial customer balance
    cout << "Enter the initial account balance: ";
    cin >> balance;

    // Validate initial balance
    if (balance <= 0) {
        cout << "Initial balance must be greater than zero. Program ending." << endl;
        return 0;
    }

    // Use a while loop to allow repeated withdrawals as long as the balance is sufficient
    while (balance > 0) {
        cout << "Current Balance: " << balance << endl;
        cout << "\nEnter amount to withdraw (or 0 to cancel): ";
        cin >> withdrawalAmount;

        // Allow user to manually stop if they choose
        if (withdrawalAmount <= 0) {
            cout << "Transaction cancelled by user." << endl;
            break;
        }

        // Check if the withdrawal amount is greater than the balance
        if (withdrawalAmount > balance) {
            cout << "Insufficient funds! Transaction denied." << endl;
            cout << "The requested amount exceeds your current balance." << endl;
            break; // Stop the loop
        }

        // Deduct the amount from the balance
        balance -= withdrawalAmount;

        // Display the remaining balance
        cout << "Withdrawal successful! Amount deducted: " << withdrawalAmount << endl;
        cout << "Remaining Balance: " << balance << endl;
    }

    // Final output
    cout << "\nSystem closed. \nFinal account balance: " << balance << endl;

    return 0;
}
