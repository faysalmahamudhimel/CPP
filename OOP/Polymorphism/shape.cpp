#include <iostream>
using namespace std;

class Shape {
public:
    double dim1, dim2;

    Shape(double a, double b) {
        dim1 = a;
        dim2 = b;
    }

    virtual double area() {
        return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(double a, double b) : Shape(a, b) {}

    double area() {
        return 0.5 * dim1 * dim2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double a, double b) : Shape(a, b) {}

    double area() {
        return dim1 * dim2;
    }
};

int main() {
    Shape *s;

    Triangle t(10, 5);
    Rectangle r(10, 5);

    s = &t; 
    cout << s->area() << endl;

    s = &r;
    cout << s->area() << endl;

    return 0;
}