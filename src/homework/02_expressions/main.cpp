//write include statements
#include "hwexpressions.h"
#include <iostream>
using namespace std;




//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{

	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	
	cout << "Enter meal amount: ";
	cin >> meal_amount;

	cout << "Enter tip rate: ";
	cin >> tip_rate;

 // ==============================================================================
 // function calls
 // ==============================================================================

	tax_amount = get_sales_tax_amount(meal_amount);

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal amount: " << meal_amount << "\n";
	cout << "Tax amount :" << tax_amount << "\n";
	cout << "Tip amount :" << tip_amount << "\n";
	cout << "Total amount :" << total << "\n";

	return 0;

}
