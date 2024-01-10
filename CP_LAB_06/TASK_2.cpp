#include<iostream>
using namespace std;
double power(double number, int pow = 2);
int main()
{
	double number, result;
	int ex;
	char choice;
	cout << "\n\nEnter a Number: ";
	cin >> number;
	cout << "\n\nDo you want to enter the Exponential (Y/N)? ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		cout << "\n\nEnter Exponential: ";
		cin >> ex;
		result = power(number, ex);
	}
	else
	{
		result = power(number);
	}
	cout << "\n\nRESULT: " << result;
	cout << endl << endl;
	system("pause");
	return 0;
}
double power(double number, int pow)
{
	double result = 1;
	for (int i = 0; i < pow; i++)
	{
		result *= number;
	}
	return result;
}
