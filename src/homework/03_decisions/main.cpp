//write include statements
#include "decisions.h"
#include <iostream>
#include<string>

using std::cout; 
using std::cin;
using std::string;


int main() 
{

	// var declaration

	int grade_if;
	int grade_switch;
	string sgrade_if;
	string sgrade_switch;

	cout << "Please enter a grade between 0-100 (If statement): ";
	cin >> grade_if;
	cout << "Please enter a grade between 0-100 (Switch statement): ";
	cin >> grade_if;

//=====================================================================
//Function calls
//=====================================================================

sgrade_if = get_letter_grade_using_if(grade_if);
sgrade_switch = get_letter_grade_using_switch(grade_switch);

cout << "Your If grade is a " << sgrade_if << "\n";

cout << "Your Switch grade is a " << sgrade_switch << "\n";

	return 0;
}