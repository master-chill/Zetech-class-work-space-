#include <iostream>
using namespace std;
#include <string>

int main() {
    //Store predefined username and password
    const string correctUsername = "chegeemmanuel@z3tech";
    const string correctPassword = "zetech123";

    string inputUsername;
    string inputPassword;
    bool accessGranted = false;

    // Use a do-while loop to repeatedly prompt the user
    do {
        cout << "--- Online Service Login ---" << endl;
        cout << "Enter Username: ";
        cin >> inputUsername;

        cout << "Enter Password: ";
        cin >> inputPassword;

        // Check the input credentials
        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            cout << "\nAccess Granted! Welcome to the system." << endl;
            accessGranted = true; 
        } else {
            cout << "\nIncorrect credentials, try again.\n" << endl;
        }

    // The system should continue until correct credentials are entered
    } while (!accessGranted); 

    return 0;
}
