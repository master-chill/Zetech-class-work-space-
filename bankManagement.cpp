//Bank management system
#include <iostream>
#include <string>
using namespace std;


class AccountHolder {
    protected:
        string name;

    public:
        void setName(string n) {
            name = n;
        }

        string getName(){
            return name;
        }

};

class BankAccount: public AccountHolder {
    private:
        int accountNumber;
        double balance;
    
    public:
        BankAccount(string n, int AccNo, double bal) {
            setName(n);
            accountNumber = AccNo;
            balance = bal;
        }

    public:
        int getAccountNumber(){
            return accountNumber;
        }

        double getBalance() {
            return balance;
        }

};

class SavingsAccount: public BankAccount {
    private:
        double interestRate;

    public:
        SavingsAccount(string n, int AccNo, double bal, double iRate): BankAccount(n, AccNo, bal) {
            interestRate = iRate; 
        }

        double getInterestRate() {
            return interestRate;
        }

};

int main() {
    SavingsAccount SA("Manuh", 1304986, 250000.6, 0.1);

    cout<<"Name: "<<SA.getName()<<endl;
    cout<<"Account number: "<<SA.getAccountNumber()<<endl;
    cout<<"Account balance: "<<SA.getBalance()<<endl;
    cout<<"Interest rate: "<<SA.getInterestRate()<<endl;

    return 0;

}
