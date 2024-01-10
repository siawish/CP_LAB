#include<iostream>
#include<string>

using namespace std;

struct Student
{
    string Name;
    string EnrollmentNumber;
    string Subjects[5];
    int CreditHours[5];
    float QuizMarks[5];
    float AssignmentMarks[5];
    float MidtermMarks[5];
    float FinalMarks[5];
    int TotalMarks[5];
    char Grade[5];
    float GradePoints[5];
    float TotalCredits;
    float TotalGradePoints;
    float GPA;
};

int main()
{
    Student studentRecord;

    cout << "\n\nEnter Name: ";
    getline(cin, studentRecord.Name);

    cout << "\n\nEnter Enrollment: ";
    getline(cin, studentRecord.EnrollmentNumber);
    cin.ignore();

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Subject " << i + 1 << "'s name: ";
        getline(cin, studentRecord.Subjects[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter " << studentRecord.Subjects[i] << "'s Credit hours: ";
        cin >> studentRecord.CreditHours[i];

        cout << "\nEnter " << studentRecord.Subjects[i] << "'s Quiz marks: ";
        cin >> studentRecord.QuizMarks[i];

        cout << "\nEnter " << studentRecord.Subjects[i] << "'s Assignment marks: ";
        cin >> studentRecord.AssignmentMarks[i];

        cout << "\nEnter " << studentRecord.Subjects[i] << "'s Mids marks: ";
        cin >> studentRecord.MidtermMarks[i];

        cout << "\nEnter " << studentRecord.Subjects[i] << "'s Final marks: ";
        cin >> studentRecord.FinalMarks[i];

        studentRecord.TotalMarks[i] = studentRecord.QuizMarks[i] + studentRecord.AssignmentMarks[i] +
                                       studentRecord.MidtermMarks[i] + studentRecord.FinalMarks[i];

        if (studentRecord.TotalMarks[i] >= 85)
            studentRecord.Grade[i] = 'A';
        else if (studentRecord.TotalMarks[i] >= 70)
            studentRecord.Grade[i] = 'B';
        else if (studentRecord.TotalMarks[i] >= 60)
            studentRecord.Grade[i] = 'C';
        else if (studentRecord.TotalMarks[i] >= 50)
            studentRecord.Grade[i] = 'D';
        else
            studentRecord.Grade[i] = 'F';

        switch (studentRecord.Grade[i])
        {
        case 'A':
            studentRecord.GradePoints[i] = 4.0 * studentRecord.CreditHours[i];
            break;
        case 'B':
            studentRecord.GradePoints[i] = 3.5 * studentRecord.CreditHours[i];
            break;
        case 'C':
            studentRecord.GradePoints[i] = 3.0 * studentRecord.CreditHours[i];
            break;
        case 'D':
            studentRecord.GradePoints[i] = 2.0 * studentRecord.CreditHours[i];
            break;
        case 'F':
            studentRecord.GradePoints[i] = 1.0 * studentRecord.CreditHours[i];
            break;
        }
    }

    studentRecord.TotalCredits = 0;
    for (int i = 0; i < 5; i++)
    {
        studentRecord.TotalCredits += studentRecord.CreditHours[i];
    }

    studentRecord.TotalGradePoints = 0;
    for (int i = 0; i < 5; i++)
    {
        studentRecord.TotalGradePoints += studentRecord.GradePoints[i];
    }

    studentRecord.GPA = studentRecord.TotalGradePoints / studentRecord.TotalCredits;

    cout << "\n\nName: " << studentRecord.Name;
    cout << "\nEnrollment: " << studentRecord.EnrollmentNumber;

    cout << "\n\n\tSubjects\tCredit Hours\tTotal Marks\tGrade\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\t" << studentRecord.Subjects[i] << "\t\t" << studentRecord.CreditHours[i] << "\t\t"
             << studentRecord.TotalMarks[i] << "\t\t" << studentRecord.Grade[i];
        cout << endl << endl;
    }

    cout << "\n\nGPA = " << studentRecord.GPA;

    cout << endl << endl;
    system("pause");
    return 0;
}

