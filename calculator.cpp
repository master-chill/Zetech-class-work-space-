//Online C++ program for a simple calculator

#include <iostream>   //for cout<< and cin>> commands
using namespace std;

int main() {
    //Declare variables
    char Operator;
    int num1, num2, result;
    
    //Prompt user to enter two values and an operator
    cout <<"Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator: ";
    cin >> Operator;

    //Apply the selected operator
    switch(Operator) {
        case '+': 
            result = num1 + num2;
            cout<<"The result is "<<result;
        break;
        
        case '-': 
            result = num1 - num2;
            cout<<"The result is "<<result;
        break;
        
        case '*': 
            result = num1 * num2;
            cout<<"The result is "<<result;
        break;
        
        case '/': 
            if(num2 == 0) {
                cout<<"Error. Division by zero is not allowed!"<<endl;
            }
            else {
                result = num1 / num2;
                cout<<"The result is "<<result;
            }
        break;
        
        default:
            cout<<"You've entered the wrong operator.";
        
    }

    return 0;
}
