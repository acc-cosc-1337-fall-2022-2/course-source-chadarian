#include "func.h"
#include <string>
#include <iostream>
using namespace std;

int main() 
{
	int reply = 0;
	int exit = 1;

	do
	{
		cout << "\nFor GC Content enter 1 \n";
		cout << "For DNA Complement enter 2 \n";
		cout << "To Exit enter 3 \n\n";
		cin >> reply;

		if (reply == 1)
		{
			string dna;
			cout << "Please enter a DNA strand to check GC content :\n";
			cin >> dna;
			cout << "The GC conent is :" << get_gc_content(dna) << endl;

		}
		
		if (reply == 2)
		{
			string dna;
			cout << "Please enter a DNA strand get DNA complement :\n";
			cin >> dna;
			cout << "The DNA complement is :" << get_dna_complement(dna) << endl;
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