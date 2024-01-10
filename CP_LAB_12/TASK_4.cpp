#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Student
{
    string name;
    string age;
    string CGPA;
    string DOB;
    string PlaceOfBirth;
};

int main()
{
    ofstream file("Data.txt");

    if (!file.is_open())
    {
        cerr << "\n\nError: Unable to create or open 'Data.txt'\n\n";
        return 1; // Exit with an error code
    }

    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\nStudent " << i + 1;
        cout << "\n\nEnter Name: ";
        getline(cin, students[i].name);
        cout << "\n\nEnter Age: ";
        getline(cin, students[i].age);
        cout << "\n\nEnter CGPA: ";
        getline(cin, students[i].CGPA);
        cout << "\n\nEnter Date of Birth: ";
        getline(cin, students[i].DOB);
        cout << "\n\nEnter Place of Birth: ";
        getline(cin, students[i].PlaceOfBirth);
    }

    for (int i = 0; i < 5; i++)
    {
        file << "Student " << i + 1 << ":\n";
        file << "Name: " << students[i].name << "\n";
        file << "Age: " << students[i].age << "\n";
        file << "CGPA: " << students[i].CGPA << "\n";
        file << "DOB: " << students[i].DOB << "\n";
        file << "Place of Birth: " << students[i].PlaceOfBirth << "\n\n";
    }

    file.close();

    cout << "\n\nStudent data has been saved to 'Data.txt' successfully.\n\n";

    cout << "\n\n";
    system("pause");
    return 0;
}

