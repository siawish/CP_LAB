#include<iostream>
using namespace std;

struct Phone
{
    int area_code;
    int exchange;
    int number;
};

int main()
{
    Phone myNumber;
    Phone yourNumber;

    myNumber.area_code = 456;
    myNumber.exchange = 746;
    myNumber.number = 8099;

    cout << "\n\nEnter your area code, exchange, and number: ";

    while (!(cin >> yourNumber.area_code) || yourNumber.area_code < 100 || yourNumber.area_code > 999)
    {
        cout << "\nInvalid area code. Please enter a valid three-digit area code: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    while (!(cin >> yourNumber.exchange) || yourNumber.exchange < 100 || yourNumber.exchange > 999)
    {
        cout << "\nInvalid exchange. Please enter a valid three-digit exchange: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    while (!(cin >> yourNumber.number) || yourNumber.number < 1000 || yourNumber.number > 9999)
    {
        cout << "\nInvalid number. Please enter a valid four-digit number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\n\nMy Number is (" << myNumber.area_code << ") " << myNumber.exchange << "-" << myNumber.number;
    cout << "\n\nYour Number is (" << yourNumber.area_code << ") " << yourNumber.exchange << "-" << yourNumber.number;

    cout << endl << endl;
    system("pause");
    return 0;
}

