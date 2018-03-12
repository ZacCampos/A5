#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	char  name[30];
	int	  currentSalary  = 0;
	float payIncrease	 = 0;
	float newSalary		 = 0;
	float monthlySalary  = 0;
	float retroactivePay = 0;

	cout << left;
	cout << setw(29) <<"What is your name?";
	cin.getline (name, 30);

	cout << setw(29) <<"What is your current salary?";
	cin  >> currentSalary;

	cout << setw(29) << "What is your pay increase?";
	cin  >> payIncrease;
	cout << endl;
	cout << right;

	//Calculation Section
	newSalary 		= (payIncrease * currentSalary) + currentSalary;

	monthlySalary 	= newSalary / 12;

	retroactivePay	= (newSalary / 2) - (currentSalary / 2);

	//Output Section
	cout << right;
	cout << name << "'s SALARY INFORMATION" << endl;
	cout << "New Salary" << setw(19) << "Monthly Salary" << setw(19) << "Retroactive Pay" << endl;
	cout << fixed << setprecision(2);
	cout << setw(10) <<newSalary << setw(19) << monthlySalary << setw(19) << retroactivePay;

	return 0;
}
