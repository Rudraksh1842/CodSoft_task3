#include <iostream>
using namespace std;

int main()
{

    while (true)
    {
        cout << "\t__________________________" << endl;
        cout << "\n\t\tCalculator" << endl;
        cout << "\t__________________________" << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        int choice, a, b;
        long double dividend, divisor;
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            cout << "Enter first numbers: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
        }
        else if (choice == 4)
        {

            cout << "Enter Dividend: ";
            cin >> dividend;
            cout << "Enter Divisor: ";
            cin >> divisor;
        }
        int m;
        long double d;
        if (choice == 1)
        {
            m = a + b;
            cout << "Result = " << m << endl;
        }
        else if (choice == 2)
        {
            m = a - b;
            cout << "Result = " << m << endl;
        }
        else if (choice == 3)
        {
            m = a * b;
            cout << "Result = " << m << endl;
        }
        else if (choice == 4)
        {

            d = dividend / divisor;
            cout<<"Result = "<<d<<endl;
        }
        else if (choice == 5)
        {
            break;
        }
    }
    return 0;
}