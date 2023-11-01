//Functional Calculator

#include<iostream>
using namespace std;
int main() 
{
	float N1, N2, Answer;
	char operter;
	string choice="";
	
	do {
		cout << "Enter First number, Operator and Second number: ";
		cin >> N1 >> operter >> N2;
		switch (operter)
		{
		case '+':
		    Answer = N1 + N2;
			break;

		case '-':
			Answer = N1 - N2;
			break;

		case '*':
			Answer = N1 * N2;
			break;
		case'/':
			Answer = N1 / N2;
			break;
		default:
			break;

		}
		cout << "Answer = " << Answer << endl;
		cout << "Do Another?(y/n): ";
		cin >> choice;

	} while (choice == "Y" || choice == "y");
	
	return 0 ;
}

