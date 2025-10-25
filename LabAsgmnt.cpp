// TASK - 01

#include <iostream>

using namespace std;

int main()
{
    cout << "Name: Saad Zia" << endl;
    cout << "Registration Number: 23825" << endl;
    cout << "Course Name: Software Construction and Development" << endl;
    
    return 0;
}


// TASK - 02

#include <iostream>

using namespace std;

int main()
{
    string nameOne, nameTwo, nameThree;
    int rollOne, rollTwo, rollThree;
    float gpaOne, gpaTwo, gpaThree;

    cout << "Enter name, roll number, and GPA of first student: ";
    cin >> nameOne >> rollOne >> gpaOne;
    
    cout << "Enter name, roll number, and GPA of second student: ";
    cin >> nameTwo >> rollTwo >> gpaTwo;
    
    cout << "Enter name, roll number, and GPA of third student: ";
    cin >> nameThree >> rollThree >> gpaThree;

    cout << "\nFirst Student: " << nameOne << " " << rollOne << " " << gpaOne << endl;
    cout << "Second Student: " << nameTwo << " " << rollTwo << " " << gpaTwo << endl;
    cout << "Third Student: " << nameThree << " " << rollThree << " " << gpaThree << endl;
    
    return 0;
}

// Task - 03
#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 85) cout << "Grade: A" << endl;
    else if (marks >= 70) cout << "Grade: B" << endl;
    else if (marks >= 55) cout << "Grade: C" << endl;
    else if (marks >= 40) cout << "Grade: D" << endl;
    else cout << "Grade: F" << endl;

    return 0;
}

// Task - 04

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int temp = number;
    int digits = 0;
    
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = number;
    int sum = 0;
    
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == number) cout << "Armstrong Number" << endl;
    else cout << "Not an Armstrong Number" << endl;

    return 0;
}

// Task - 05
#include <iostream>

using namespace std;

int main()
{
    int numbers[10] = {12, 45, 7, 89, 23, 56, 90, 11, 34, 67};
    int maxValue = numbers[0];
    int minValue = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > maxValue) maxValue = numbers[i];
        if (numbers[i] < minValue) minValue = numbers[i];
    }

    cout << "Maximum Value: " << maxValue << endl;
    cout << "Minimum Value: " << minValue << endl;

    return 0;
}

// Task - 06

#include <iostream>

using namespace std;

int main()
{
    int numbers[10] = {12, 45, 7, 89, 23, 56, 90, 11, 34, 67};
    int valueToFind;
    
    cout << "Enter value to find: ";
    cin >> valueToFind;

    bool found = false;
    
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == valueToFind)
        {
            found = true;
            break;
        }
    }

    if (found) cout << "Value found in array" << endl;
    else cout << "Value not found in array" << endl;

    return 0;
}


// Task - 07
#include <iostream>

using namespace std;

int main()
{
    int numbers[10] = {12, 45, 7, 89, 23, 56, 90, 11, 34, 67};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array in Ascending Order: ";
    
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }
    
    cout << endl;

    return 0;
}

