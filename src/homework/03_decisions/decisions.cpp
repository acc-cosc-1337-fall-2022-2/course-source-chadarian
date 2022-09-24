//write include statement for decisions header
#include "decisions.h"
#include <iostream>
#include<string>

using std::cout; 
using std::cin;
using std::string;


//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    if(grade >= 90)
    {
        return "A";
    }
    else if(grade >= 80)
    {
        return "B";
    }
    else if(grade >= 70)
    {
        return "C";
    }
    else if(grade >= 60)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

string get_letter_grade_using_switch(int grade)
{
    std::string letter;
    switch(grade)
    {
        case 90 ... 100: letter = "A"; break;

        case 80 ... 89: letter = "B"; break;

        case 70 ... 79: letter = "C"; break;

        case 60 ... 69: letter = "D"; break;

        default : letter = "F";
    }

    return letter;

}
