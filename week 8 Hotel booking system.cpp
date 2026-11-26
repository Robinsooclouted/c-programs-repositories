/*ROBINSON NYANGENA CT/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// Create a class named RoomBooking
class RoomBooking {
    private:
        string guestName;
        int roomNumber;
        int daysBooked;

    public:

        // Constructor
        RoomBooking(string name, int room, int days) {
            guestName = name;
            roomNumber = room;
            daysBooked = days;

            cout << "Room booking confirmed" << endl;
        }

        // Function to display booking details
        void displayBooking() {
            cout << "\n===== ROOM BOOKING DETAILS =====" << endl;
            cout << "Guest Name: " << guestName << endl;
            cout << "Room Number: " << roomNumber << endl;
            cout << "Number of Days Booked: " << daysBooked << endl;
        }

        // Destructor
        ~RoomBooking() {
            cout << "\nBooking ended, room released" << endl;
        }
};

// Main function
int main() {

    // Create an object and initialize booking details
    RoomBooking booking1("Robin Junior", 205, 5);

    // Display booking details
    booking1.displayBooking();

    return 0;
}
