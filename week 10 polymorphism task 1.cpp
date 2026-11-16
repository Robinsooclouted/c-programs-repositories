/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
using namespace std;

class Payment {
public:

    // Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment" << endl;
        cout << "Final Payment Amount: " << amount << endl;
    }

    // Card payment
    void processPayment(int amount, int fee) {
        int total = amount + fee;

        cout << "\nCard Payment" << endl;
        cout << "Final Payment Amount: " << total << endl;
    }

    // Mobile payment
    void processPayment(int amount, int fee, int discount) {
        int total = amount + fee - discount;

        cout << "\nMobile Payment" << endl;
        cout << "Final Payment Amount: " << total << endl;
    }
};

int main() {
    // Create an object of Payment class
    Payment p;

    // Demonstrate cash payment
    p.processPayment(1000);

    // Demonstrate card payment
    p.processPayment(1000, 50);

    // Demonstrate mobile payment
    p.processPayment(1000, 50, 100);

    return 0;
}
