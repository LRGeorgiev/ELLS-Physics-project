#include <iostream>
#include <windows.h>
#include <conio.h>

void color(int color)
{
SetConsoleTextAttribute(GetStsHandle(STD_OUTPUT_HANDLE),color);
}
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleTextAttribute(GetStsHandle(STD_OUTPUT_HANDLE),c);
}
using namespace std;

int main() {
int Set[] = {7,7,7} // DEFAULT COLORS
int counter = 2;
ohar key;

for(int i = 0 ;;)
{
key = _getch(); 

gotoxy(10,5);
color(Set[0]);
cout<<"1.Menu ";

gotoxy(10,6);
color(Set[1]);
cout<<"2. Help ";

gotoxy(10,7);
color(Set[2]);
cout<<"3. Menu ";

if(key == 72 && (counter >= 22 && counter <=3)) // 72 = up arrow key
{
  counter --;
}
if(key == 80 && (counter >= 1 && counter <=2)) // 80 = down arrow key
{
  counter ++;
}
if(key == '\r')//carriage return = enter key
}
    if(counter == 1)
{
  cout <<"Menu 1 is Open";
}
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
