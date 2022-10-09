//add include statements
#include "func.h"
#include <string>
#include <iostream>
//add function code here

double get_gc_content(std::string dna)
{
    double total = dna.length();
    double num = 0;

    for(char c : dna)
    {
        if( c == 'G'|| c == 'g') num++;
        else if( c == 'C'|| c == 'c') num++;
    }

    return (num / total);
}

std::string get_reverse_string(std::string dna)
{
    int num = dna.length();

    for (int i = 0; i < num / 2; i++)
        std::swap(dna[i], dna[num - i - 1]);
   
   return dna;
}

std::string get_dna_complement(std::string dna)
{
    size_t size = dna.length();
    size_t num = 0;

    for( char &c : dna)
    {
        if( c == 'G' || c == 'g' ) c = 'C';
        else if (c == 'C' || c == 'c') c = 'G';
        else if (c == 'A' || c == 'a') c = 'T';
        else if (c == 'T' || c == 't') c = 'A';
    }

    return get_reverse_string(dna);
}