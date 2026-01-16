#include <iostream>
using namespace std;

class Complex
{
    int realPart;
    int imaginaryPart;

public:
    Complex(int realValue, int imaginaryValue)
    {
        realPart = realValue;
        imaginaryPart = imaginaryValue;
    }

    void Display()
    {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

int main()
{
    Complex firstNumber(3, 4);
    firstNumber.Display();
    return 0;
}


#include <iostream>
using namespace std;

class Complex
{
    int realPart;
    int imaginaryPart;

public:
    Complex(int realValue = 0, int imaginaryValue = 0)
    {
        realPart = realValue;
        imaginaryPart = imaginaryValue;
    }

    Complex operator-(Complex secondNumber)
    {
        Complex resultNumber;
        resultNumber.realPart = realPart - secondNumber.realPart;
        resultNumber.imaginaryPart = imaginaryPart - secondNumber.imaginaryPart;
        return resultNumber;
    }

    void Display()
    {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

int main()
{
    Complex firstNumber(6, 5);
    Complex secondNumber(2, 3);

    Complex resultNumber = firstNumber - secondNumber;
    resultNumber.Display();

    return 0;
}

#include <iostream>
using namespace std;

class Complex
{
    int realPart;
    int imaginaryPart;

public:
    void InputValues()
    {
        cout << "Enter real part: ";
        cin >> realPart;
        cout << "Enter imaginary part: ";
        cin >> imaginaryPart;
    }

    Complex operator+(Complex secondNumber)
    {
        Complex resultNumber;
        resultNumber.realPart = realPart + secondNumber.realPart;
        resultNumber.imaginaryPart = imaginaryPart + secondNumber.imaginaryPart;
        return resultNumber;
    }

    void Display()
    {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }
};

int main()
{
    Complex firstNumber;
    Complex secondNumber;
    Complex resultNumber;

    cout << "Enter first complex number" << endl;
    firstNumber.InputValues();

    cout << "Enter second complex number" << endl;
    secondNumber.InputValues();

    resultNumber = firstNumber + secondNumber;
    cout << "Sum of complex numbers is: ";
    resultNumber.Display();

    return 0;
}


