/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// Create a class named BankAccount
class BankAccount {
    private:
        string accountHolder;
        int accountNumber;
        double balance;

    public:

        // Constructor
        BankAccount(string name, int number, double amount) {
            accountHolder = name;
            accountNumber = number;
            balance = amount;

            cout << "Account successfully created" << endl;
        }

        // Member function to display account details
        void displayAccount() {
            cout << "\n===== BANK ACCOUNT DETAILS =====" << endl;
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Balance: Ksh " << balance << endl;
        }

        // Destructor
        ~BankAccount() {
            cout << "\nAccount closed successfully" << endl;
        }
};

// Main function
int main() {

    // Create an object and initialize account details
    BankAccount account1("Robin Junior", 123456, 50000);

    // Display account details
    account1.displayAccount();

    return 0;
}
