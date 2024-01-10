#include<iostream>
using namespace std;

char upper_case(char alphabet);

int main()
{
	char key;
	cout << "\n\nEnter a Letter (lower_case): ";
	cin >> key;
	cout << "\n\nEntered lower_case Letter in Upper-Case: " << upper_case(key);
	cout << endl << endl;
	system("pause");
	return 0;
}

char upper_case(char alphabet)
{
	if(isupper(alphabet))
	{
		return alphabet;
	}
	else alphabet -= 32; 
	
	return alphabet;
}
