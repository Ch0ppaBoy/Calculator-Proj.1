/* -----------------------------------------------------------------------------
FILENAME:			Calculator.cpp
DESCRIPTION:        Functioning calculator 
COMPILER:           MiniGW 
NOTES:              
   
MODIFICATION HISTORY:

Author             Date               Version
---------------    ----------         --------------
Chayton Zuniga		2021-09-20			1.0-Input correct file & function headers, -notes and returns,
											as well as added all of my #includes.
Chayton Zuniga		2021-09-22			1.1-created cases for my menu as well as the basic foundation for 
											main menu functions.	
Chayton Zuniga		2021-09-24			1.2- Created functions for other mathematic functions,
											as well as linked them to their cases and got them to work.
Chayton Zuniga		2021-09-26			1.3- Created if, or, else, statement to adjust for 0
											in the division operation.
Chayton Zuniga		2021-09-27			1.4- 
----------------------------------------------------------------------------- */

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;

const string PROGRAMMER_NAME = "Chayton Zuniga";   

float y, x, sum;


char Get_Choice2();
char Get_Choice();			 
void Add_2_Numbers();		
void Get_x_and_y();
void Subtract_2_Numbers();
void Multiply_2_Numbers();
void Divide_2_Numbers();
int Powers_and_Roots();
void Square_Number();
void Get_x();
void Cube_Number();
void Raise_to_any_Power();
void Square_Root();
void Cube_Root();
void Take_any_Root();
/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       Excutes Add_2_Numbers and Get_Choice in a loop
RETURNS:           0
NOTES:             .
----------------------------------------------------------------------------- */
int main()
{	
	char choice1;

	bool running = true;   

	system("cls");

	cout << "WELCOME to the CALCULATOR PRACTICE PROGRAM." << endl; 
	cout << "This program allows you to practice your math skills." << endl;
	cout << "Choose what you want to practice in the menu shown below." << endl;

	while (running)
	{
		choice1 = Get_Choice();
		switch (choice1)
		{
	
			case 'a':
				Add_2_Numbers();
					break;
			
			case'b':
				Subtract_2_Numbers();
					break;
			
			case 'c':
				Multiply_2_Numbers();
					break;

			case 'd':
				Divide_2_Numbers();
				break;

			case 'e':
				Powers_and_Roots();
				break;

			case 'q':
				running = false;	 
				break;				
		}
	}

	cout << "Goodbye! \n";			
	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;
	
	system("pause");
	return 0;
}



/* -----------------------------------------------------------------------------
FUNCTION:          Powers_&_Roots 
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
 int Powers_and_Roots()
{ 
	char choice2;

	bool run = true;   
	
	system("cls");

	cout << "Welcome to the Powers & Roots Menu."<< endl; 
	cout << "This menu allows you to take powers and roots of a number." << endl << endl;

	while (run)
	{
		choice2 = Get_Choice2();
		switch (choice2)
		{
	
			case 'a':
				 Square_Number();
					break;
			
			case'b':
				Cube_Number();
					break;
			
			case 'c':
				Raise_to_any_Power();
					break;

			case 'd':
				Square_Root();
				break;

			case 'e':
				Cube_Root();
				break;
		
			case 'f':
				Take_any_Root();
				break; 

			case 'm':
				run = false;
				break;

		//	case 'q':
					 
	//			break;				
		}
	}
}





/* -----------------------------------------------------------------------------
FUNCTION:          Get_Choice
DESCRIPTION:       Creates a menu with varying choices of variables to choose from
RETURNS:           Choice
NOTES:             Only two create resulsts being, qutting the program and adding the sum x & y
----------------------------------------------------------------------------- */
char Get_Choice()
{

	char choice1;
	
						
	cout << endl;
	cout << "-----------------------------------------------" << endl; 
	cout << "		MAIN MENU" << endl;
	cout <<"-----------------------------------------------" << endl;
	cout << endl << endl;
	cout << "	a.	Addition		(x+y)" << endl << endl;
	cout << "	b.	Subtraction		(x-y)" << endl << endl;
	cout << "	c.	Multiplication		(x*y)" << endl << endl;
	cout << "	d.	Division		(x/y)" << endl << endl;
	cout << "	e.	Powers & Roots" << endl << endl;
	cout << "	q.	Quit the program " << endl << endl; 
	cout << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Enter your choice [ a - e, q ]:" << endl;
	cout << "-----------------------------------------------" << endl;
	cin >> choice1;
	cout << endl << endl;


	choice1 = tolower(choice1);
	if (choice1 >= 'a' &&  choice1 <= 'q')
		cout << "You entered: '" << choice1 << "', that is correct input ." << endl;
	else
	{
		cout << "You did not enter 'a','b' or 'c'." << endl;
		cout << "Please rerun the program." << endl;
	}

	cout << endl;

	return (choice1);
}
/* -----------------------------------------------------------------------------
FUNCTION:          Get_Choice
DESCRIPTION:       Creates a menu with varying choices of variables to choose from
RETURNS:           Choice
NOTES:             Only two create resulsts being, qutting the program and adding the sum x & y
----------------------------------------------------------------------------- */
char Get_Choice2()
{

	char choice2;
	
						
	cout << endl;
	cout << "-----------------------------------------------" << endl; 
	cout << "		POWERS & ROOTS MENU" << endl;
	cout <<"-----------------------------------------------" << endl;
	cout << endl << endl;
	cout << "	a.	Square a number		(x^2)" << endl << endl;
	cout << "	b.	Cube a number		(x^3)" << endl << endl;
	cout << "	c.	Raise to any power	(x^y)" << endl << endl;
	cout << "	d.	Square root a number	(x^1/2)" << endl << endl;
	cout << "	e.	Cube root a number	(x^1/3)" << endl << endl;
	cout << "	f.	Take any root		(x^1/y)" << endl << endl;
	cout << "	m.	Return to Main Menu" << endl << endl;
	cout << "	q.	Quit the program " << endl << endl; 
	cout << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Enter your choice [ a - f, m, q ]:" << endl;
	cout << "-----------------------------------------------" << endl;
	cin >> choice2;
	cout << endl << endl;


	choice2 = tolower(choice2);
	if (choice2 >= 'a' &&  choice2 <= 'q')
		cout << "You entered: '" << choice2 << "', that is correct input ." << endl;
	else
	{
		cout << "You did not enter [ a - m, q ]" << endl;
		cout << "Please input a letter [ a - m, q ]" << endl;
	}

	cout << endl;

	return (choice2);
}
/* -----------------------------------------------------------------------------
FUNCTION:          Add_2_Numbers
DESCRIPTION:       Takes two numbers and adds them.
RETURNS:           0 
NOTES:             
----------------------------------------------------------------------------- */
void Add_2_Numbers()
{
	Get_x_and_y();
	 
	 sum= x + y;

	
	cout << endl;
	cout << "	x + y =  " << x << " + " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}
/* -----------------------------------------------------------------------------
FUNCTION:          Get_x_and_y()
DESCRIPTION:       Lets you input values for x and y 
RETURNS:           0 
NOTES:             Also created a way to move it between functions
----------------------------------------------------------------------------- */
void Get_x_and_y()
{
cout << "Please input x and y: ";
	cin >> x;
	cin >> y;

	
	
	//if (i)
	//{

//	}

	 
}
/* -----------------------------------------------------------------------------
FUNCTION:          Get_x()
DESCRIPTION:        
RETURNS:           0 
NOTES:             
----------------------------------------------------------------------------- */
void Get_x()
{
cout << "Please input x: ";
	cin >> x;
}
/* -----------------------------------------------------------------------------
FUNCTION:          Subtract_2_Numbers
DESCRIPTION:       Subtracts given x & y variables.
RETURNS:           .b
b
NOTES:             .
----------------------------------------------------------------------------- */

void Subtract_2_Numbers()
{
	Get_x_and_y();
	
	sum = x - y;

	cout << endl;
	cout << "	x - y =  " << x << " - " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}


/* -----------------------------------------------------------------------------
FUNCTION:          Multiply_2_Numbers
DESCRIPTION:       Multiplies given x & y variables.
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Multiply_2_Numbers()
{
	Get_x_and_y();

	sum = x * y;

	cout << endl;
	cout << "	x * y =  " << x << " * " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Divide_2_Numbers()
DESCRIPTION:       Divides given x & y variables
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Divide_2_Numbers()
{
	Get_x_and_y();

	sum = x / y;

	if (x ==0 || y==0)
		
	cout << "Arthemtic Error: Enter a value ( < 0 or > 0) " << endl << endl;
	else 
	{
	cout << endl << endl;
	cout << endl << endl;
	cout << "	x / y = "<< x << " / " << y
		 << " = " << sum << endl; 
	cout << endl << endl;
	}
	
}

/* -----------------------------------------------------------------------------
FUNCTION:          Square_Number()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Square_Number()
 {
	Get_x();

  sum = pow(x,2);

cout << "x^2 = " << x << "^2 =" << sum<< endl;
 
}
/* -----------------------------------------------------------------------------
FUNCTION:          Cube_Number()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Cube_Number()
{
	Get_x(); 

	sum = pow(x,3);
cout << "x^3 = " << x << "^3 =" << sum<< endl;

} 

/* -----------------------------------------------------------------------------
FUNCTION:          Raise_to_any_Power()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Raise_to_any_Power()
{
	Get_x_and_y(); 

sum = pow(x,y);

cout  << "x^y = " << x << "^" << y << "=" << sum << endl;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Square_Root()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Square_Root() 
{

Get_x();

sum = (x, 1.0/2.0);
cout << "x^ 1/2 = " << x << "^ 1/2 =" << sum<< endl;

}

/* -----------------------------------------------------------------------------
FUNCTION:          Cube_Root()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Cube_Root()
{
Get_x();

sum = pow(x,1.0/3.0);
cout << "x^ 1/3 = " << x << "^ 1/3 =" << sum<< endl;
}

/* -----------------------------------------------------------------------------
FUNCTION:          Take_any_Root()
DESCRIPTION:       .
RETURNS:           .
NOTES:             .
----------------------------------------------------------------------------- */
void Take_any_Root()
{
Get_x_and_y();

sum = pow(x,1.0/y);

cout << "x^1/y= " << x << "^1/" <<y << " =" << sum << endl;
}