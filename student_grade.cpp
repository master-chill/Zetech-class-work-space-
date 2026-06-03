//Online C++ program to assign grades based on students' exam marks

#include <iostream>   //for cout<< and cin>> commands
using namespace std;
#include <string>     //for getline() command

int main() {
    //Declare variables
    string StudentName;
    int marks;
    char grade;
    
    //Prompt user to enter student details
    cout << "Enter the student details:"<<endl;
    cout << "Name: ";
    getline(cin, StudentName);
    cout << "Marks: ";
    cin >>marks;

    //Assign grade according to marks
    if(marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if(marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if(marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if(marks >= 40 && marks <= 49){
        grade = 'D';
    }
    else {
        grade = 'E';
    }
    //Print the student's results
    cout << endl << "*============Student Results============*" << endl;
    cout << "Name: "<<StudentName<<endl;
    cout << "Marks: "<<marks<<endl;
    cout << "Grade: "<<grade<<endl;
    cout << "*=======================================*";

    return 0;
}
