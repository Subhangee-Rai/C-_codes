#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual float calculateArea() = 0; // Pure virtual function
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    // Override the calculateArea function
    float calculateArea() override {
        return length * width;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    // Override the calculateArea function
    float calculateArea() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create objects of Rectangle and Circle
    Rectangle rectangle(5, 4);
    Circle circle(3);

    // Base class pointer pointing to derived class objects
    Shape *shapePtr1 = &rectangle;
    Shape *shapePtr2 = &circle;

    // Call calculateArea function using base class pointers
    cout << "Area of Rectangle: " << shapePtr1->calculateArea() << endl;
    cout << "Area of Circle: " << shapePtr2->calculateArea() << endl;

    return 0;
}
