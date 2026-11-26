/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
    protected:
        string name;
        int age;

    public:
        // Function to display person details
        void displayPerson() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Derived class
class Student : public Person {
    private:
        int admissionNumber;
        string studentClass;

    public:
        // Function to input student details
        void inputDetails() {
            cout << "Enter Student Name: ";
            getline(cin, name);

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Admission Number: ";
            cin >> admissionNumber;

            cin.ignore();

            cout << "Enter Class: ";
            getline(cin, studentClass);
        }

        // Function to display student details
        void displayStudent() {
            cout << "\n===== STUDENT DETAILS =====" << endl;

            // Display inherited details
            displayPerson();

            cout << "Admission Number: " << admissionNumber << endl;
            cout << "Class: " << studentClass << endl;
        }
};

// Main function
int main() {

    // Create Student object
    Student student1;

    // Input details
    student1.inputDetails();

    // Display all details
    student1.displayStudent();

    return 0;
}
