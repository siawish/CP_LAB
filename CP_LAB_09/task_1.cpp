#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 10;
    int numbers[arraySize];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> numbers[i];

        if (numbers[i] % 2 == 0)
        {
            evenCount += 1;
        }
        else
        {
            oddCount += 1;
        }
    }

    cout << "\n\nEntered Values: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << numbers[i] << "\t";
    }

    cout << "\n\nEven Numbers in the Array: " << evenCount;
    cout << "\n\nOdd Numbers in the Array: " << oddCount;

    cout << endl << endl;
    system("pause");
    return 0;
}

