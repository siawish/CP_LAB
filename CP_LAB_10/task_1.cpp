#include<iostream>
#include<string>

using namespace std;

int main()
{
    string myString;
    int positionToDelete;

    cout << "\n\nEnter a String: ";
    getline(cin, myString);

    cout << "\n\nBefore Deletion: ";
    cout << myString;

    cout << "\n\nEnter the position (count spaces as well, if any) of the character you want to remove: ";
    cin >> positionToDelete;

    positionToDelete = positionToDelete - 1;

    if (positionToDelete >= 0 && positionToDelete < myString.length()) {
        myString.erase(positionToDelete, 1);
        cout << "\n\nAfter Deletion: " << myString;
    }
    else {
        cout << "\n\nInvalid position. Deletion not performed.";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

