#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    // Predefined login credentials
    string correctUsername = "admin";
    string correctPassword = "ROBIN";

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted!" << endl;
        }
        else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}