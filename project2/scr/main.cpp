// Kaczmarek Kacper main.cpp
// Testing Fifo template and own class "LetterNumber"
// NODE.h FIFO.h LETTERNUMBER.h required

#include <iostream>

#include "NODE.h"
#include "FIFO.h"
#include "LETTERNUMBER.h"
#include "Testingg.h"


using namespace std;

int main()
{
    Testing A;
    LetterNumber LN( 'C', 5 );
    A.add_pop_int( 10 );
    A.add_pop_LN ( LN );
    A.isempty_int (1);
    A.isempty_int (0);
    A.isempty_LN (1);
    A.isempty_LN (0);
    A.amount_int( 5 );
    A.amount_LN( 6 );
    A.same_int( 1 );
    A.same_int( 0 );
    A.same_LN( 1 );
    A.same_LN( 0 );
}
