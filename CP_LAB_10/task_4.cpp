#include<iostream>
#include<string>

using namespace std;

int main()
{
    int flag = 0;
    string inputString = "";
    string reversedString = "";

    cout << "\nEnter the Phrase or Word: ";
    getline(cin, inputString);

    int index = 0;
    for (int i = inputString.length() - 1; i >= 0; i--)
    {
        reversedString[index] = inputString[i];
        index++;
    }

    for (int k = 0; k < inputString.length(); k++)
    {
        if (reversedString[k] != inputString[k])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "\nNOT A PALINDROME";
    }
    else
    {
        cout << "\nPALINDROME";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

