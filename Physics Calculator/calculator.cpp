#include <iostream>

using namespace std;


int main()
{
	int choice;
	bool calcOn = true;
	char op;
	float num1, num2;
	cout << "===================================================== \n";
	cout << " \t\tPHYSICS PROJECT\t \n ";
	cout << "===================================================== \n";
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
			cout << "Calculator:\n";
			
			cout << "Formulas" << endl;
			cout << "Average Speed Formula = 1 " << endl;
			cout << "Density Formula  = 2 " << endl;
			cout << "Power Formula = 3 " << endl;
			cout << "Newton’s Second Law = 4 " << endl;
			cout << "Enter Formula: ";
			cin >> op;

			cout << "Enter Two Numbers: ";
			cin >> num1 >> num2;

			switch (op) {
			case '1':
				cout << num1 << "km" << " / " << num2 << "h" << " = " << num1 / num2 << "km/h\n";
				break;

			case '2':
				cout << num1 << "kg" << " / " << num2 << "m" << " = " << num1 / num2 << "kg/m\n ";
				break;

			case '3':
				cout << num1 << "J" << " / " << num2 << "s" << " = " << num1 / num2 << "J/s\n";
				break;

			case '4':
				cout << num1 << "kg" << " * " << num2 << "m/s" << " = " << num1 * num2 << "N\n";
				break;

			default:
				cout << "Error!\n";
				break;
			}

			break;
		case 2:
			cout << "To use the calculator just choose the formula you want and then type two numbers.\n";
		
			break;
		case 3:
			cout << "Our team:\n";
			cout << "Lubomir Georgiev-Leader and Scrum trainer\n";
			cout << "Eric Ivanov and Stanislav Yordanov-Back end Developers\n";
			cout << "Lorena Hristova-QA engineer\n";
			
			break;
		case 4:
			cout << "End of Program.\n";
			calcOn = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

	}
	return 0;
}
