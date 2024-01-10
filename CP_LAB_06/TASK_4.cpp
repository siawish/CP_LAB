#include<iostream>
using namespace std;

float calculateCharges(float hours);
float calculateTotalCharges(float charges[]);
float calculateTotalHours(float hours[]);

int main()
{
    float parkedHours[3];
    float parkingCharges[3];
    float totalHours = 0, totalCharges = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nEnter Hours for Car " << i + 1 << ": ";
        cin >> parkedHours[i];
        parkingCharges[i] = calculateCharges(parkedHours[i]);
    }

    cout << "\nCAR\t\tHOURS\t\tCHARGES";
    for (int i = 0; i < 3; i++)
    {
        cout << "\n" << i + 1 << "\t\t" << parkedHours[i] << "\t\t" << parkingCharges[i];
    }

    cout << "\n\n\nTotal\t\t" << calculateTotalHours(parkedHours) << "\t\t" << calculateTotalCharges(parkingCharges);
    cout << endl << endl;
    system("pause");
    return 0;
}

float calculateCharges(float hours)
{
    float hourlyCharge = 2.00;
    if (hours > 3.00)
    {
        hours -= 3;
        hourlyCharge = (hours * 0.50) + 2.00;
        if (hourlyCharge > 10.00)
        {
            hourlyCharge = 10.00;
        }
    }
    return hourlyCharge;
}

float calculateTotalCharges(float charges[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += charges[i];
    }
    return sum;
}

float calculateTotalHours(float hours[])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += hours[i];
    }
    return sum;
}

