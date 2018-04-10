// Kaczmarek Kacper LETTERNUMBER.h
// Class represents letter and number ( like field in battleships )

#ifndef LETTERNUMBER_H_INCLUDED
#define LETTERNUMBER_H_INCLUDED

#include <iostream>

using namespace std;

class LetterNumber
{
    char letter;
    int number;
public:
    LetterNumber( char l = 'A', int n = 1 );
    void operator= ( const LetterNumber &X );
    friend ostream& operator<<( ostream &, const LetterNumber & );
    bool operator== ( const LetterNumber &X );
    bool operator!= ( const LetterNumber &X );
};

#endif // LETTERNUMBER_H_INCLUDED
