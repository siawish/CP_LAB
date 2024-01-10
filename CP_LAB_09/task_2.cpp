#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 4;
    int numbers[arraySize];

    numbers[0] = 4;
    numbers[1] = 9;
    numbers[2] = 1;
    numbers[3] = 3;

    cout << "\n\nUn-Sorted List: ";

    for (int i = 0; i < arraySize; i++)
    {
        cout << numbers[i] << "\t";
    }

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (numbers[j] < numbers[i])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "\n\nSorted List: ";

    for (int i = 0; i < arraySize; i++)
    {
        cout << "\t" << numbers[i];
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

