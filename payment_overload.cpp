#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class Payment {
    public:
        float processPayment(float amount) {
            return amount;
        }

        float processPayment(float amount, float transactionFee) {
            return amount + transactionFee;
        }

        float processPayment(float amount, float transactionFee, float discount) {
            return amount + transactionFee - discount;
        }
};

int main() {
    Payment pay;

    cout<<fixed<<setprecision(2);
    cout<<"Cash payment: Ksh "<<pay.processPayment(10000)<<endl;
    cout<<"Card payment: Ksh "<<pay.processPayment(10000, 29)<<endl;
    cout<<"Mobile payment: Ksh "<<pay.processPayment(10000, 29, 1000)<<endl;

    return 0;

}
