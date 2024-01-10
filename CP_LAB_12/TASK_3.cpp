#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fileOut("Input_file");

    if (!fileOut.is_open())
    {
        cerr << "\n\nError: File not found!\n\n";
        return 1; // Exit with an error code
    }

    fileOut << "\n\nName: Talha\nEnrollment: 01-131232-089\nClass: BSE-1A";

    fileOut.close();

    ifstream fileIn("Input_file");

    if (!fileIn.is_open())
    {
        cerr << "\n\nError: File not found!\n\n";
        return 1; // Exit with an error code
    }

    char character;
    int count = 0;

    cout << "\n\nFile content: ";

    while (fileIn.get(character))
    {
        cout << character;
        count++;
    }

    fileIn.close();

    cout << "\n\nCharacters in this file: " << count;

    cout << "\n\n";
    system("pause");
    return 0;
}

