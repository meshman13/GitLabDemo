#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
    int Perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;
    cin >> length >> width;
    Rectangle r(length, width);
    cout << "Area = " << r.Area() << endl;
    cout << "Perimeter = " << r.Perimeter();
    return 0;
}




#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
};

int main() {
    Rectangle r(4,5);
    cout << "Area = " << r.Area();
    return 0;
}


#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
    int Perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r(4,5);
    cout << "Area = " << r.Area() << endl;
    cout << "Perimeter = " << r.Perimeter();
    return 0;
}




#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
    int Perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r1(4,5);
    Rectangle r2(6,3);
    Rectangle r3(2,7);

    cout << "R1 Area = " << r1.Area() << ", Perimeter = " << r1.Perimeter() << endl;
    cout << "R2 Area = " << r2.Area() << ", Perimeter = " << r2.Perimeter() << endl;
    cout << "R3 Area = " << r3.Area() << ", Perimeter = " << r3.Perimeter();
    return 0;
}




#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
    int Perimeter() {
        return 2 * (length + width);
    }
    void Display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    int length, width;
    cin >> length >> width;
    Rectangle r(length, width);
    r.Display();
    cout << "Area = " << r.Area() << endl;
    cout << "Perimeter = " << r.Perimeter();
    return 0;
}


#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    int Area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(4,5);
    Rectangle r2(6,3);

    if(r1.Area() > r2.Area())
        cout << "R1 has bigger area";
    else if(r1.Area() < r2.Area())
        cout << "R2 has bigger area";
    else
        cout << "Both have equal area";
    return 0;
}

#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) {
        side = s;
    }
    int Area() {
        return side * side;
    }
};

int main() {
    int side;
    cin >> side;
    Square s(side);
    cout << "Area = " << s.Area();
    return 0;
}

