#include<iostream>
using namespace std;

double findLargerDistance(float distance1, float distance2);

int main()
{
    float firstDistance, secondDistance;

    cout << "\n\nEnter First Distance Value (km): ";
    cin >> firstDistance;
    cout << "\n\nEnter Second Distance Value (km): ";
    cin >> secondDistance;

    cout << "\n\nLARGER Distance (km): " << findLargerDistance(firstDistance, secondDistance);
    cout << endl << endl;

    system("pause");
    return 0;
}

double findLargerDistance(float distance1, float distance2)
{
    if (distance1 > distance2)
    {
        return distance1;
    }
    else
    {
        return distance2;
    }
}

