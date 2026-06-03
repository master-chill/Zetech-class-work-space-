//Online C++ program to process student applications for admission

#include <iostream>   //for cout<< and cin>> commands
using namespace std;
#include <string>     //for getline() command

int main() {
    //Declare variables
    string StudentName, AdmissionStatus;
    int exam_score, age;
    
    //Prompt user to enter student details
    cout << "Enter the student details:"<<endl;
    cout << "Name: ";
    getline(cin, StudentName);
    cout << "Age: ";
    cin >> age;
    cout << "Exam score: ";
    cin >> exam_score;

    //Test for eligibility of admission
    if(age >= 18) {
        if(exam_score >= 50) {
            AdmissionStatus = "Admitted.";
        }
        else {
            AdmissionStatus = "Not admitted: low score.";
        }
    }
    else {
        AdmissionStatus = "Not admitted: underage";
    }

    //Print the admission decision
    cout << endl << "*============Student Admission Results============*" << endl;
    cout << "Name: "<<StudentName<<endl;
    cout << "Age: " <<age<<endl;
    cout << "Exam score: "<<exam_score<<endl;
    cout << "Admission status: "<<AdmissionStatus<<endl;
    cout << "*=================================================*";

    return 0;
}
