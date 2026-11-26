/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
    protected:
        string brand;
        int year;

    public:
        // Function to display vehicle details
        void displayVehicle() {
            cout << "Brand: " << brand << endl;
            cout << "Year of Manufacture: " << year << endl;
        }
};

// Derived class
class Car : public Vehicle {
    private:
        int numberOfDoors;
        double engineCapacity;

    public:
        // Function to input car details
        void inputDetails() {
            cout << "Enter Vehicle Brand: ";
            getline(cin, brand);

            cout << "Enter Year of Manufacture: ";
            cin >> year;

            cout << "Enter Number of Doors: ";
            cin >> numberOfDoors;

            cout << "Enter Engine Capacity (CC): ";
            cin >> engineCapacity;
        }

        // Function to display all car details
        void displayCar() {
            cout << "\n===== CAR DETAILS =====" << endl;

            // Display inherited details
            displayVehicle();

            cout << "Number of Doors: " << numberOfDoors << endl;
            cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
        }
};

// Main function
int main() {

    // Create an object of Car class
    Car car1;

    // Input vehicle details
    car1.inputDetails();

    // Display all details
    car1.displayCar();

    return 0;
}