//add include statements
#include "dna.h"

//add function(s) code here

int factorial(int num)
{

    int sum = 1;
    for(int i = 1; i <= num; ++i) 
    {
        sum *= i;
    }
    return sum;

}

int gcd(int num1, int num2)
{

    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        else
        {
            num1 = num1 - num2;
        }
    }

return num1;

}