#include <iostream>
using namespace std;
#include <string>

class Person {
    private:
        string name;

    public:
        Person(string n) {
            name = n;
        }

        void setName(string n) {
            name = n;
        }

        string getName() {
            return name;
        }
};

class LibraryMember: public Person {
    private:
        int memberID;
        int booksBorrowed;

    public:
        LibraryMember(string n, int M_ID, int B_B): Person(n) {
            memberID = M_ID;
            booksBorrowed = B_B;
        }

        int getMemberID() {
            return memberID;
        }

        int getBooksBorrowed() {
            return booksBorrowed;
        }
};

class PremiumMember: public LibraryMember {
    private:
        double membershipFee;

    public:
        PremiumMember(string n, int M_ID, int B_B, double M_F): LibraryMember(n, M_ID, B_B) {
            membershipFee = M_F;
        }

        double getMembershipFee() {
            return membershipFee;
        }
};

int main() {
    LibraryMember student("Emmanuel Mbatia", 42925798, 3);

    cout<<"================Library member================"<<endl;
    cout<<"Member name: "<<student.getName()<<endl;
    cout<<"Member ID: "<<student.getMemberID()<<endl;
    cout<<"Books borrowed: "<<student.getBooksBorrowed()<<endl;
    cout<<"=============================================="<<endl;

    PremiumMember lecturer("Paul Githaiga", 14627683, 5, 3000);

    cout<<"\n===============Premium member================="<<endl;
    cout<<"Member name: "<<lecturer.getName()<<endl;
    cout<<"Member ID: "<<lecturer.getMemberID()<<endl;
    cout<<"Books borrowed: "<<lecturer.getBooksBorrowed()<<endl;
    cout<<"Membership fee: "<<lecturer.getMembershipFee()<<endl;
    cout<<"=============================================="; 

    return 0;
}
