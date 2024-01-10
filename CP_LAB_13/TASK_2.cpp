#include<iostream>
#include<string>

using namespace std;

struct Customer {
    string name;
    string address;
    string phoneNumber;
};

int main() {
    Customer myCustomer;

    cout << "Enter customer name: ";
    getline(cin, myCustomer.name);

    cout << "Enter customer address: ";
    getline(cin, myCustomer.address);

    cout << "Enter customer phone number: ";
    getline(cin, myCustomer.phoneNumber);

    string customerName;
    cout << "\nEnter a customer name to display their information: ";
    getline(cin, customerName);

    if (customerName == myCustomer.name) {
        cout << "\nCustomer Information:\n";
        cout << "Name: " << myCustomer.name << "\n";
        cout << "Address: " << myCustomer.address << "\n";
        cout << "Phone Number: " << myCustomer.phoneNumber << "\n";
    } else {
        cout << "\nCustomer not found!\n";
    }

    return 0;
}

