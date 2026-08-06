#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int admissionNo;
    string Class;

    Student(string n, int a, int admNo, string CLASS) : Person(n, a) {
        admissionNo = admNo;
        Class = CLASS;
    }

    void displayStudent() {
        displayPerson();
        cout << "Admission number: " << admissionNo << endl;
        cout << "Class: " << Class << endl;
    }
};

int main() {
    Student form2("Emmanuel Mbatia", 21, 8644, "2 South");

    form2.displayStudent();

    return 0;
}
