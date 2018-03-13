/*******************************************************************************
 * AUTHOR		: Zac Campos
 * STUDENT ID	: 1058476
 * ASSIGN #5	: Input & Output - New Salary
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/14/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * NEW SALARY
 * -----------------------------------------------------------------------------
 * This program will output the user's new annual salary, monthly pay, and
 * retroactive pay.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<The input is the user's name, current salary, and pay increase.>
 *
 * OUTPUT:
 * 	<This program will output the user's new annual salary, monthly pay,
 * 	and retroactive pay.>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 5;
	const char LAB_NAME[]	= "Eclipse Tutorial";
	const int  MONTHS		= 6;

	// Input and Calculation variables
	char  name[30];
	int		currentSalary	= 0;
	float	payIncrease		= 0;
	float	newSalary		= 0;
	float	monthlySalary	= 0;
	float 	retroactivePay	= 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT - Takes in the user's name, current salary, and pay increase.
	 **************************************************************************/
	cout << left;
	cout << setw(29) <<"What is your name?";
	cin.getline (name, 30);

	cout << setw(29) <<"What is your current salary?";
	cin  >> currentSalary;
	cin.ignore(10000, '\n');

	cout << setw(29) << "What is your pay increase?";
	cin  >> payIncrease;
	cout << endl;
	cout << right;

	/***************************************************************************
	 * PROCESSING - Calculates the user's new salary, monthly salary, and
	 * 				retroactive pay due.
	 **************************************************************************/
	newSalary 		= (payIncrease * currentSalary) + currentSalary;

	monthlySalary 	= newSalary / 12.0;

	retroactivePay	= (monthlySalary - (currentSalary / 12.0)) * MONTHS;

	/***************************************************************************
	 * OUTPUT - Outputs the user's Salary information.
	 **************************************************************************/
	cout << right;
	cout << name << "'s SALARY INFORMATION" << endl;
	cout << "New Salary" << setw(19) << "Monthly Salary";
	cout << setw(19) << "Retroactive Pay" << endl;
	cout << fixed << setprecision(2);
	cout << setw(10) <<newSalary << setw(19) << monthlySalary ;
	cout << setw(19) << retroactivePay;

	return 0;
}
