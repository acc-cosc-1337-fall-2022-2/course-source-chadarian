//write include statements
#include <iostream>
#include "dna.h"
using namespace std;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{

	int reply = 0;
	int exit = 1;

	do
	{

		cout << "\nFor Factorials enter 1 \n";
		cout << "For GCD enter 2 \n";
		cout << "To Exit enter 3 \n\n";
		cin >> reply;

		if (reply == 1)
		{
			int num1;
			cout << "Please enter a number for your factorial :\n";
			cin >> num1;
			cout << "Your annswer is :" << factorial(num1) << endl;

		}
		
		if (reply == 2)
		{
			int num1;
			int num2;
			cout << "Please enter two numbers for your GCD :\n";
			cin >> num1;
			cin >> num2;
			cout << "Your annswer is :" << gcd(num1, num2) << endl;
		}

		if (reply == 3)
		{

			string exit_reply;

			cout << "Are you sure you want to exit? Please type yes or no in lowercase\n";
			cin >> exit_reply;
			if (exit_reply == "yes")
			{
				cout << "Goodbye\n";
				exit = 0;
			}
			
			else if (exit_reply == "no")
			{
				cout << " Back to the menu\n";
			}

			else
			{
				cout <<"=================================\n";
				cout << "Make sure you use lower case\n";
				cout <<"=================================\n";
			}
		}

	}
	while (exit == 1);


	return 0;
}