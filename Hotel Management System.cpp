#include <iostream>
using namespace std;

class Booking {
public:
    int id;
    string from;
    string to;
    int guest_no;

    void setBooking(int id, string from, string to, int guest_no) {
        this->id = id;
        this->from = from;
        this->to = to;
        this->guest_no = guest_no;
    }

    void getBooking() {
        cout << "Booking ID= " << id << endl;
        cout << "Date from= " << from << " to " << to << endl;
        cout << "Guest Number= " << guest_no << endl;
    }
};

class Room : public Booking {
public:
    string room_type;

    void setRoom(int id, string room_type) {
        this->id = id;  // Using id from Booking
        this->room_type = room_type;
    }

    void getRoom() {
        cout << "Room id= " << id << endl;
        cout << "Room type= " << room_type << endl;
    }
};

class Guest : public Booking {
public:
    string name;
    string surname;
    int age;

    void setGuest(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void getGuest() {
        cout << "Guest Name= " << name << endl;
        cout << "Surname= " << surname << endl;
        cout << "Age= " << age << endl;
    }
};

class Payment : public Booking {
public:
    int amount;
    string cardNumber;

    void setPayment(int amount, string cardNumber) {
        this->amount = amount;
        this->cardNumber = cardNumber;
    }

    void getPayment() {
        cout << "Amount= " << amount << endl;
        cout << "Card Number= " << cardNumber << endl;
    }
};

int main() {
    Guest guest;
    Room room;

    room.setBooking(1201, "2-February-2025", "4-February-2025", 2);
    room.setRoom(101, "AC room");
    room.getBooking();
    room.getRoom();

    guest.setBooking(1001, "5-February-2025", "9-February-2025", 4);
    guest.setGuest("Elvis", "Peca", 21);
    guest.getBooking();
    guest.getGuest();

    Payment payment;
    payment.setBooking(1002, "5-February-2025", "7-February-2025", 7);
    payment.setPayment(3500, "N00001356");
    payment.getBooking();
    payment.getPayment();

    return 0;
}
