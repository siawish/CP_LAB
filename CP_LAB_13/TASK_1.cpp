#include<iostream>
#include<string>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product myProduct;

    cout << "Enter product name: ";
    getline(cin, myProduct.name);

    cout << "Enter product price: ";
    cin >> myProduct.price;

    cout << "Enter quantity in stock: ";
    cin >> myProduct.quantity;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string productName;
    cout << "\nEnter a product name to display its information: ";
    getline(cin, productName);

    if (productName == myProduct.name) {
        cout << "\nProduct Information:\n";
        cout << "Name: " << myProduct.name << "\n";
        cout << "Price: $" << myProduct.price << "\n";
        cout << "Quantity in stock: " << myProduct.quantity << "\n";
    } else {
        cout << "\nProduct not found!\n";
    }

    return 0;
}

