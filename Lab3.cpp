// Task - 01
#include <iostream>

using namespace std;

int marks;

int main() {
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A";
    } 
    else if (marks >= 75) {
        cout << "Grade B";
    } 
    else if (marks >= 50) {
        cout << "Grade C";
    } 
    else {
        cout << "Grade F";
    }

    return 0;
}

// Task - 02
#include <iostream>

using namespace std;

int num;

int main() {
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

