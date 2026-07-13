//A code that demonstrates polymorphism
#include <iostream>
using namespace std;
#include <string>

class LoanProcessing {
    public:
        void processLoan(int amount) {
            cout << "Processing loan for Ksh " << amount << ". Please wait..." << endl;
        }

        void processLoan(double amount, double InterestRate) {
            cout << "\nProcessing loan of Ksh " << amount << " with interest rate " << InterestRate << "%. Please wait..." << endl;
        }

        void processLoan(string customerName, int amount, int duration) {
            //Display all the details
            cout << "\nCustomer Name: " << customerName << endl;
            cout << "Loan Amount: " << amount << endl;
            cout << "Loan Duration: " << duration << " years" << endl;

        }
};

int main() {
    LoanProcessing loan;
    loan.processLoan(20000); // Calls the first method
    loan.processLoan(50000, 5.5); // Calls the second method
    loan.processLoan("Emmanuel Mbatia", 50000, 10); // Calls the third method

    return 0;
}
