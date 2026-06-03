//Online C++ program to determine whether a learner driver has passed or failed the driving test

#include <iostream>   //for cout<< and cin>> commands
using namespace std;
#include <string>     //for getline() command

int main() {
    //Declare variables
    string StudentName;
    int TheoryTest_marks, PracticalTest_marks;
    float Average_marks;
    
    //Prompt user to enter student details
    cout << "Enter the student details:"<<endl;
    cout << "Name: ";
    getline(cin, StudentName);
    cout << "Theory test score: ";
    cin >>TheoryTest_marks;
    cout << "Practical test score: ";
    cin >> PracticalTest_marks;

    //Calculate average marks
    Average_marks = (TheoryTest_marks + PracticalTest_marks)/2;

    //Print the student's driving test results
    cout << endl << "*============Student Driving Test Results============*" << endl;
    cout << "Name: "<<StudentName<<endl;
    cout << "Theory test score: "<<TheoryTest_marks<<endl;
    cout << "Practical test score: "<<PracticalTest_marks<<endl;
    cout << "Average score: "<<Average_marks<<endl;
    
    //Test if the student has passed or failed
    if(Average_marks >= 50) {
        cout<< "Passed."<<endl;
    }
    else {
        cout << "Failed."<<endl;
    }    
    cout << "*====================================================*";

    return 0;
}
