// Kaczmarek Kacper main.cpp
// Testing Fifo template and own class "LetterNumber"
// NODE.h FIFO.h LETTERNUMBER.h required

#include <iostream>


#include "Fifo.h"
#include "node.h"
#include "LetterNumber.h"
//#include "Fifo.cpp"
//#include "Node.cpp"


using namespace std;

int main()
{
    Fifo<LetterNumber> A;
    LetterNumber B;
    A.add( LetterNumber( B ) );
    cout << A;
    return 0;
}
