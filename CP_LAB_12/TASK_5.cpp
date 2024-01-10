#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int arr[2][3] = {
        {66, 33, 16},
        {13, 29, 12}
    };

    ofstream file_1("num.txt");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            file_1 << arr[i][j];
            file_1 << "  ";
        }
        file_1 << endl;
    }

    file_1.close();

    int result[2][4];

    int num;

    ifstream file("num.txt");

    for (int i = 0; i < 2; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            file >> num;
            result[i][j] = num;
            sum += result[i][j];

            if (j < 2)
            {
                file.get();
            }
        }

        result[i][3] = sum;
    }

    file.close();

    ofstream file_2("sum.txt");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            file_2 << "\t" << result[i][j];
        }
        file_2 << endl;
    }

    file_2.close();

    cout << "\n\nSum stored to the sum.txt file successfully";

    cout << endl << endl;
    system("pause");
    return 0;
}

