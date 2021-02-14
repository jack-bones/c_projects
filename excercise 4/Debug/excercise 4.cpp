//chapter two question 8
//created by Robert Heend
#include <stdio.h>
#include <iostream>
using namespace std;

const int SECRET = 11;
const double RATE = 12.50;
int num1, num2, newNum;
string name;
double hoursWorked, wages;

int main()
{
	

	cout << "Enter 2 integers" << endl;  //e
	cin >> num1;  //e
    cin >> num2; //e
	cout << "The value of num1 = " << num1 << " "; //f
	cout << "and the value of num2 = " << num2 << "." << endl; //f
	newNum = num1 * 2 + num2; //g
    cout << "newNum = " << newNum << endl; //f
	newNum = newNum + SECRET;
	cout << "newNum with an added SECRET = " << newNum << endl;
	cout << "enter your last name " << endl; 
	cin >> name;
	cout << "enter a decimal number between 0 and 70" << endl;
	cin >> hoursWorked;
	wages = RATE * hoursWorked;
	cout << "Name:" << name << endl;
	//cout << "Pay Rate: $" << RATE << endl;
	printf("Pay Rate: %.2lf\n", RATE); //gets the both decimals per the output
	//cout << "Hours Worked:" << hoursWorked << endl;
	printf("Hours Worked: %.2lf\n", hoursWorked ); //gets the both decimals per the output
	cout << "Salary: $" << wages << endl;

}