#include<iostream>
using namespace std;
int main() {

	int x;
	int	f = 1;
	cout << "Enter a number: ";
	cin >> x;

	int i = 1;

	do
	{
		f *= i;
		
		i++;
	} 
	while (i <= x);
	
	cout << "Factorial of " << x << " is " << f << endl;
	return 0;

}
