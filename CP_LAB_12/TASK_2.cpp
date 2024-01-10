#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ofstream file("Myfile.txt");

    if (!file.is_open())
    {
        cerr << "\n\nFile not found!\n\n";
        return 1; // Exit with an error code
    }

    string myString;

    cout << "\n\nEnter the string to write to the file: ";
    getline(cin, myString);

    file << myString;

    file.close();

    cout << "\n\nString has been written to the file successfully";

    cout << endl << endl;
    system("pause");
    return 0;
}

