// Kaczmarek Kacper Testing.h
// Class is made to test class Fifo with Node

#ifndef TESTINGG_H_INCLUDED
#define TESTINGG_H_INCLUDED

#include "FIFO.h"
#include "LETTERNUMBER.h"

class Testing
{

public:
    bool add_pop_int ( int info );
    bool add_pop_LN ( LetterNumber &info );
    void isempty_int ( bool agree );
    void isempty_LN ( bool agree );
    bool amount_int ( int howmany );
    bool amount_LN ( int howmany );
    void same_int ( bool agree );
    void same_LN ( bool agree );
};



#endif // TESTINGG_H_INCLUDED
