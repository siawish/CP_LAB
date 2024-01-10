#include <iostream>
using namespace std;

int findMaxIndex(const int* numbers, int& size);

int main()
{
    int numberOfIntegers;

    cout << "\n\nEnter the number of integers: ";
    cin >> numberOfIntegers;

    int* integerArray = new int[numberOfIntegers];

    cout << "\n\nEnter " << numberOfIntegers << " integers:\n" << endl;

    for (int i = 0; i < numberOfIntegers; i++) 
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> integerArray[i];
    }

    int largestNumberIndex = findMaxIndex(integerArray, numberOfIntegers);

    cout << "\nThe largest number is: " << integerArray[largestNumberIndex] << " at index " << largestNumberIndex << endl;

    delete[] integerArray;

    return 0;
}

int findMaxIndex(const int* array, int& size)
{
    int maxIndex = 0;

    for (int i = 1; i < size; i++) 
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    return maxIndex;
}

