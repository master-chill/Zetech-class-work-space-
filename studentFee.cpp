#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class Student {
    private:
        string studentName;
        int admissionNumber;
        float feeBalance;

    public:
        void inputStudentData() {
            cout<<"Enter the following details:"<<endl;
            cout<<"Student name: ";
            getline(cin>>ws, studentName);
            cout<<"Admission number: ";
            cin>>admissionNumber;
            cout<<"Fee balance: Ksh ";
            cin>>feeBalance;
        }

        string getStudentName() {
            return studentName;
        }

        int getAdmissionNumber() {
            return admissionNumber;
        }

        float getFeeBalance() {
            return feeBalance;
        }

        float makePayment() {
            float amountPaid;

            cout<<"\nEnter the amount to pay: ";
            cin>>amountPaid;
            feeBalance = feeBalance - amountPaid;

            return feeBalance;
        }



        void displayStatus() {
            cout<<"\n============Student fee status============"<<endl;
            cout<<"Student name: "<<getStudentName()<<endl;
            cout<<"Admission number: "<<getAdmissionNumber()<<endl;
            cout<<"Original fee balance: Ksh "<<fixed<<setprecision(2)<<getFeeBalance()<<endl;
            cout<<"Current fee balance: Ksh "<<fixed<<setprecision(2)<<getFeeBalance()<<endl;
            cout<<"==========================================";
        }
};

int main() {
    Student Form1;

    Form1.inputStudentData();
    Form1.makePayment();
    Form1.displayStatus();

    return 0;
}
