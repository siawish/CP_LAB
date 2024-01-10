#include<iostream>
#include<string>

using namespace std;

int main()
{
    string myString;

    cout << "\n\nEnter a String: ";
    getline(cin, myString);

    int count = myString.length();

    cout << "\n\nCharacters in the String are: " << count;

    cout << endl << endl;
    system("pause");
    return 0;
}

