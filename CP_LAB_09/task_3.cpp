#include<iostream>
using namespace std;

int main()
{
    const int numRows = 4;
    const int numCols = 3;
    int numberArray[numRows][numCols] = { {1, 2, 3}, {2, 4, 6}, {3, 5, -7}, {-1, 4, 8} };

    cout << "\n\nARRAY: ";

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cout << "\t" << numberArray[i][j];
        }
        cout << endl;
    }

    cout << "\n\nNegative Numbers in the array: ";

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (numberArray[i][j] < 0)
            {
                cout << "\t" << numberArray[i][j];
            }
        }
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

