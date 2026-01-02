#include <iostream>
using namespace std;

class Shape {
public:
    void area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    void area(int length, int width) {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape s;
    s.area(5);
    s.area(4, 6);
    return 0;
}

#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = pi * r * r" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->area();
    return 0;
}

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Triangle : public Shape {
public:
    void area() {
        cout << "Area of Triangle = 1/2 * base * height" << endl;
    }
};

int main() {
    Shape* s;
    Triangle t;
    s = &t;
    s->area();
    return 0;
}





