// Kaczmarek Kacper main.cpp
// Testing Fifo template and own class "LetterNumber"
// NODE.h FIFO.h LETTERNUMBER.h required

#include <iostream>

#include "NODE.h"
#include "FIFO.h"
#include "LETTERNUMBER.h"


using namespace std;

int main()
{
    Fifo<int> A;
    A.add ( 5 );
    cout << A;
    return 0;
}
