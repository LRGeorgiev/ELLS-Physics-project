#include <iostream>

using namespace std;


int main()
{
	int choice;
	bool calcOn = true;
	char op;
	float num1, num2;
	// The title
	cout << "===================================================== \n";
	cout << " \t\tPHYSICS PROJECT\t \n ";
	cout << "===================================================== \n";
	// The menu
	while (calcOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Calculator.\n";
		cout << " 2 - Guide.\n";
		cout << " 3 - Our Team.\n";
		cout << " 4 - Exit.\n";
		cout << " Enter your choice and press return: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			// Calculator application
			cout << "Calculator:\n";
			// All the formulas
			cout << "Formulas" << endl;
			cout << "Average Speed Formula = 1 " << endl;
			cout << "Density Formula  = 2 " << endl;
			cout << "Power Formula = 3 " << endl;
			cout << "Newton’s Second Law = 4 " << endl;
			cout << "Enter Formula: ";
			cin >> op;
			// Here you have to enter two numbers
			cout << "Enter Two Numbers: ";
			cin >> num1 >> num2;
			// Here the program starts calculating
			switch (op) {
			// Average Speed Formula
			case '1':
				cout << num1 << "km" << " / " << num2 << "h" << " = " << num1 / num2 << "km/h\n";
				break;

			case '2':
			// Density Formula
				cout << num1 << "kg" << " / " << num2 << "m" << " = " << num1 / num2 << "kg/m\n ";
				break;

			case '3':
			// Power Formula
				cout << num1 << "J" << " / " << num2 << "s" << " = " << num1 / num2 << "J/s\n";
				break;

			case '4':
			// Newton’s Second Law
				cout << num1 << "kg" << " * " << num2 << "m/s" << " = " << num1 * num2 << "N\n";
				break;

			default:
			// if you write a number above 4 it will show "Error!" in the console"
				cout << "Error!\n";
				break;
			}

			break;
		case 2:
			// This is the guide for the application
			cout << "To use the calculator just choose the formula you want and then type two numbers.\n";
		
			break;
		case 3:
			// More about our team
			cout << "Our team:\n";
			cout << "Lubomir Georgiev-Leader and Scrum trainer\n";
			cout << "Eric Ivanov and Stanislav Yordanov-Back end Developers\n";
			cout << "Lorena Hristova-QA engineer\n";
			
			break;
		case 4:
			// The exit of the program
			cout << "End of Program.\n";
			calcOn = false;
			break;
			// if you write a number above 4 it will show "Not a Valid Choice." and "Choose again."
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
	//The end of the program
	return 0;
}
