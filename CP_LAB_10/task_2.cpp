#include<iostream>
#include<string>

using namespace std;

int main()
{
    string myString;

    cout << "\n\nEnter a String: ";
    getline(cin, myString);

    int length = myString.length();

    cout << "\n\nLength of the String is " << length << ".";

    cout << endl << endl;
    system("pause");
    return 0;
}

