#include<iostream>
using namespace std;

int swap(int a);

int main()
{
	int number;

	cout << "\n\nEnter Number: ";
	cin >> number;
	cout << "\n\nBEFORE SWAP: " << number;
	cout << "\n\nAFTER SWAP: " << swap(number);

	cout << endl << endl;
	system("pause");
	return 0;
}

int swap(int a)
{
	int r_number = 0;
	while (a > 0)
	{
		int digit = a % 10;
		r_number = r_number * 10 + digit;
		a = a / 10;
	}
	return r_number;
}
