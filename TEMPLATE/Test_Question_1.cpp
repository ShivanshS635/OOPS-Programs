#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Base class Shape
class Shape
{
protected:
    string color;

public:
    Shape(string color) : color(color) {}

    // Virtual function for calculating area (to be overridden by derived classes)
    virtual double calculateArea() const = 0;

    // Display information about the shape
    void displayInfo() const
    {
        cout << "Color: " << color << endl;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(string color, double radius) : Shape(color), radius(radius) {}

    // Override the calculateArea() function for Circle
    double calculateArea() const override
    {
        return M_PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(string color, double length, double width) : Shape(color), length(length), width(width) {}

    // Override the calculateArea() function for Rectangle
    double calculateArea() const override
    {
        return length * width;
    }
};

// Derived class Triangle
class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(string color, double side1, double side2, double side3) : Shape(color), side1(side1), side2(side2), side3(side3) {}

    // Override the calculateArea() function for Triangle using Heron's formula
    double calculateArea() const override
    {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main()
{
    // Get user input for shape type
    cout << "Enter the shape type (Circle, Rectangle, Triangle): ";
    string shapeType;
    cin >> shapeType;

    // Get user input for color
    cout << "Enter the color: ";
    string color;
    cin >> color;

    if (shapeType == "Circle")
    {
        // Get user input for circle radius
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;

        // Create Circle object based on user input
        Circle circle(color, radius);

        // Display information about the Circle
        cout << "\nInformation about the Circle:" << endl;
        circle.displayInfo();
        cout << "Area: " << circle.calculateArea() << " square units" << endl;
    }
    else if (shapeType == "Rectangle")
    {
        // Get user input for rectangle length and width
        double length, width;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;

        // Create Rectangle object based on user input
        Rectangle rectangle(color, length, width);

        // Display information about the Rectangle
        cout << "\nInformation about the Rectangle:" << endl;
        rectangle.displayInfo();
        cout << "Area: " << rectangle.calculateArea() << " square units" << endl;
    }
    else if (shapeType == "Triangle")
    {
        // Get user input for triangle sides
        double side1, side2, side3;
        cout << "Enter the length of side 1: ";
        cin >> side1;
        cout << "Enter the length of side 2: ";
        cin >> side2;
        cout << "Enter the length of side 3: ";
        cin >> side3;

        // Create Triangle object based on user input
        Triangle triangle(color, side1, side2, side3);

        // Display information about the Triangle
        cout << "\nInformation about the Triangle:" << endl;
        triangle.displayInfo();
        cout << "Area: " << triangle.calculateArea() << " square units" << endl;
    }
    else
    {
        cout << "Invalid shape type." << endl;
    }
  return 0;
}
