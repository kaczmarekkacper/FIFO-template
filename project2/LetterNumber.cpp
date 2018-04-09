// Kaczmarek Kacper LetterNumber.cpp
// Function's declarations of class LetterNumber

#include <iostream>

#include "LETTERNUMBER.h"

using namespace std;

LetterNumber::LetterNumber( char l, int n )
{
    letter = l;
    number = n;
}
void LetterNumber::operator= ( const LetterNumber &X )
{
    letter = X.letter;
    number = X.number;
}
bool LetterNumber::operator== ( const LetterNumber &X )
{
    if ( letter == X.letter )
    {
        if ( number == X.number )
            return true;
    }
    return false;
}
ostream& operator<<( ostream &stream, const LetterNumber &X )
{
    stream << X.letter << ' ' << X.number ;
    return stream;
}
bool LetterNumber::operator!= ( const LetterNumber &X ) { return !(*this==X); }
