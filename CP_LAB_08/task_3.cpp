#include<iostream>
using namespace std;

int addIntegers(int a, int b)
{
    return a + b;
}

float addFloats(float a, float b)
{
    return a + b;
}

int main()
{
    int int1, int2;
    cout << "\n\nEnter the first integer value:  ";
    cin >> int1;
    cout << "\n\nEnter the second integer value:  ";
    cin >> int2;
    cout << "\n\nSum of " << int1 << " & " << int2 << " is = " << addIntegers(int1, int2);

    cout << "\n\n********************************************************";

    float float1, float2;
    cout << "\n\nEnter the first float value:  ";
    cin >> float1;
    cout << "\n\nEnter the second float value:  ";
    cin >> float2;
    cout << "\n\nSum of " << float1 << " & " << float2 << " is = " << addFloats(float1, float2);

    cout << endl << endl;
    system("pause");
    return 0;
}

