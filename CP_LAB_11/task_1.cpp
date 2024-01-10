#include<iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    Time time;
    char colon1, colon2;

    cout << "\n\nEnter Time (Hours:Minutes:Seconds) --> ";

    if (!(cin >> time.hours >> colon1 >> time.minutes >> colon2 >> time.seconds) || colon1 != ':' || colon2 != ':') {
        cerr << "\n\nInvalid input format. Please enter time in the format 'hh:mm:ss'.\n";
        return 1; // Exit with an error code
    }

    long totalSeconds = time.hours * 3600 + time.minutes * 60 + time.seconds;

    cout << "\n\nTotal Seconds: " << totalSeconds;

    cout << endl << endl;
    system("pause");
    return 0;
}

