#include<iostream>
using namespace std;

void swapNumbers(int& firstNumber, int& secondNumber);

int main()
{
    int num1, num2;

    cout << "\n\nEnter First Number: ";
    cin >> num1;

    cout << "\n\nEnter Second Number: ";
    cin >> num2;

    cout << "\n\nBEFORE SWAP\n";
    cout << "\nNumber 1: " << num1;
    cout << "\nNumber 2: " << num2;

    swapNumbers(num1, num2);

    cout << endl << endl;
    system("pause");
    return 0;
}

void swapNumbers(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "\n\nAFTER SWAP";
    cout << "\nNumber 1: " << a;
    cout << "\nNumber 2: " << b;
}

