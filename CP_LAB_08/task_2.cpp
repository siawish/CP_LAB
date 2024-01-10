#include<iostream>
using namespace std;

int calculateSquareArea(int side);          // For Area of Square
float calculateRectangleArea(float length, float breadth); // For Area of Rectangle
float calculateCircleArea(float radius);    // For Area of Circle

int main()
{
    int choice;
    cout << "\n\nPress 1 for the area of a square.\n\nPress 2 for the area of a rectangle.\n\nPress 3 for the area of a circle";
    cout << "\n\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int side;
        int squareArea;
        cout << "\n\nEnter the side length: ";
        cin >> side;
        squareArea = calculateSquareArea(side);
        cout << "\n\nArea of the square is: " << squareArea;
    }
    else if (choice == 2)
    {
        float length, breadth;
        float rectangleArea;
        cout << "\n\nEnter the length: ";
        cin >> length;
        cout << "\n\nEnter the breadth: ";
        cin >> breadth;
        rectangleArea = calculateRectangleArea(length, breadth);
        cout << "\n\nArea of the rectangle is: " << rectangleArea;
    }
    else if (choice == 3)
    {
        float radius;
        float circleArea;
        cout << "\n\nEnter the radius: ";
        cin >> radius;
        circleArea = calculateCircleArea(radius);
        cout << "\n\nArea of the circle is: " << circleArea;
    }
    else
    {
        cout << "\n\nInvalid Input";
    }

    cout << endl << endl;
    system("pause");
    return 0;
}

int calculateSquareArea(int side)
{
    int area = 0;
    area = side * side;
    return area;
}

float calculateRectangleArea(float length, float breadth)
{
    return length * breadth;
}

float calculateCircleArea(float radius)
{
    const float pi = 3.14159;
    float area = pi * (radius * radius);
    return area;
}

