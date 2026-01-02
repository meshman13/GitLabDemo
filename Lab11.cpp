#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;
    float gpa;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s;
    s.name = "Saad";
    s.age = 21;
    s.roll = 23825;
    s.gpa = 3.56;
    s.display();
    return 0;
}


#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
class Student : public Person {
public:
    int roll;
    float gpa;
    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s("Saad", 21, 23825, 3.56);
    s.display();
    return 0;
}



#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Teacher : public Person {
public:
    string subject;
    float salary;
    Teacher(string n, int a, string sub, float sal) : Person(n, a) {
        subject = sub;
        salary = sal;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Teacher t("Saad", 21, "Computer", 50000);
    t.display();
    return 0;
}
};




#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int roll;
    float gpa;
    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "\n" << endl;
    }
};

int main() {
    Student s1("Saad", 21, 23825, 3.56);
    Student s2("zia", 21, 22222, 3.56);
    s1.display();
    s2.display();
    return 0;
}



