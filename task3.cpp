// Conversion

#include<iostream>
using namespace std;
int main() {
	int d;
	cout << "Enter a decimal number to be converted into octal number: ";
	cin >> d;
	int OctalNumber = 0;
	int PlaceValue = 1;
	do {
		OctalNumber += (d % 8) * PlaceValue;
	d /= 8;
	PlaceValue *= 10;

	} while (d != 0);

	cout << "The octal number is: " << OctalNumber << endl;
	return 0;
}


