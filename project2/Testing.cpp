#include <iostream>

#include "TESTING.h"

using namespace std;

Testing::Testing( void )
{
    letter = 'A';
    number = 1;
}
void Testing::operator= ( const Testing &X )
{
    letter = X.letter;
    number = X.number;
}
bool Testing::operator== ( const Testing &X )
{
    if ( letter == X.letter )
    {
        if ( number == X.number )
            return true;
    }
    return false;
}
ostream& operator<<( ostream &stream, const Testing &X )
{
    stream << X.letter << ' ' << X.number << ' ' ;
    return stream;
}
bool Testing::operator!= ( const Testing &X ) { return !(*this==X); }
