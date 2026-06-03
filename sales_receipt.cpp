//Online C++ program to calculate customer purchases and print sales details

#include <iostream>   //for cout<< and cin>> commands
using namespace std;
#include <string>     //for getline() command

int main() {
    //Declare variables
    string CustomerName, PhoneModel;
    int Quantity, Price, TotalSales;

    //Prompt user to enter details
    cout << "Enter the following details:"<<endl;
    cout << "Your name: ";
    getline(cin, CustomerName);
    cout << "Phone model purchased: ";
    getline(cin, PhoneModel);
    cout << "No. of phones purchased: ";
    cin >> Quantity;
    cout << "Price per phone: ";
    cin >> Price;

    //Calculate total sales
    TotalSales = Quantity * Price;

    //Print the customer's sales receipt with the appropriate details
    cout << endl << "*============Customer Sales Receipt============*" << endl;
    cout << "Name: "<<CustomerName<<endl;
    cout << "Phone model: "<<PhoneModel<<endl;
    cout << "No. of phones: "<<Quantity<<endl;
    cout << "Price: "<<Price<<endl;
    cout << "Total: "<<TotalSales<<endl;
    cout << "*==============================================*";

    return 0;
}
