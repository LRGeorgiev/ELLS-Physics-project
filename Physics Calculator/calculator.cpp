#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    cout << "Formulas" << endl;
    cout << "Average Speed Formula = 1 " << endl;
    cout << "Density Formula  = 2 " << endl;
    cout << "Power Formula = 3 " << endl;
    cout << "Newton’s Second Law = 4 " << endl;
    cout << "Enter Formula: ";
    cin >> op;

    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '1':
            cout << num1 << "km" << " / " << num2 << "h"<< " = " << num1 / num2 << "km/h";
            break;

        case '2':
            cout << num1 << "kg" << " / "<< num2 << "m" <<" = " << num1/num2 << "kg/m ";
            break;

        case '3':
            cout << num1 << "J" << " / " << num2 << "s" << " = " << num1 / num2 << "J/s";
            break;

        case '4':
            cout << num1 << "kg" << " * " << num2 << "m/s" << " = " << num1 * num2 << "N";
            break;

        default:
            cout << "Error!";
            break;
    }

    return 0;
}
