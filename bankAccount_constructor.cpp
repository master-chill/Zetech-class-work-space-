#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class BankAccount {
    public:
        int accountNumber;
        string accountName;
        float accountBalance;

        BankAccount(int accNo, string accName, float accBal) {
            accountNumber = accNo;
            accountName = accName;
            accountBalance = accBal;

            cout<<"Account successfully created."<<endl;
        }

        void displayAccount() {
            cout<<"\n==========Account details=========="<<endl;
            cout<<"Account holder: "<<accountName<<endl;
            cout<<"Account number: "<<accountNumber<<endl;
            cout<<"Account balance: "<<fixed<<setprecision(2)<<accountBalance<<endl;
            cout<<"==================================="<<endl;
        }

        ~BankAccount() {
            cout<<"\nAccount closed successfully.";
        }
};

int main() {
    BankAccount KCB(13112654, "Emmanuel Mbatia", 100500);

    KCB.displayAccount();

    return 0;

}
