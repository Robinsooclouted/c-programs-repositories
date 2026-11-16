/* ROBINSON NYANGENA CT101/G/26684/25 */

#include <iostream>
using namespace std;

// i) Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// ii) Derived class Circle
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

// iv) Main function
int main() {

    // Create derived class objects
    Circle c;
    Rectangle r;
    Triangle t;

    // Create base class pointer
    Shape *shape;

    // Call draw() for Circle
    shape = &c;
    shape->draw();

    // Call draw() for Rectangle
    shape = &r;
    shape->draw();

    // Call draw() for Triangle
    shape = &t;
    shape->draw();

    return 0;
};