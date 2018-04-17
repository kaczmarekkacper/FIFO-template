// Kaczmarek Kacper main.cpp
// Testing Fifo template and own class "LetterNumber"
// NODE.h FIFO.h LETTERNUMBER.h required

#include <iostream>

#include "NODE.h"
#include "FIFO.h"
#include "LETTERNUMBER.h"
#include "TESTING.h"


using namespace std;

int main()
{
    Testing<int> TestInt;
    Testing<LetterNumber> TestLN;
    cout << "We create a two Testing objects. First Fifo for ints and second Fifo for my own class LetterNumber." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test no. 1 \"Add element\"" << endl;
    cout << "We add a number 4 and object (C, 5)" << endl;
    TestInt.add1( 4 );
    LetterNumber  LN1( 'C', 5 );
    TestLN.add1 ( LN1 );
    cout << "I would make int fifos equal and LetterNumber fifos not equal" << endl;
    TestInt.add2 ( 4 );
    LetterNumber  LN2 ( 'D', 5 );
    TestLN.add2 ( LN2 );
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test no. 2 \"Operator==\"" << endl;
    cout << "Fifos in TestINT are equal and in TestLN aren't." << endl;
    cout << "Fifos int are equal: " << endl;
    if ( TestInt.test_equal() )
        cout << "true.";
    else
        cout << "false.";
    cout << endl;
    cout << "Fifos LetterNumber are equal: " << endl;
    if ( TestLN.test_equal() )
        cout << "true.";
    else
        cout << "false.";
    cout << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test no. 3 \"Pop\"" << endl;
    TestInt.add1(5);
    TestInt.add1(7);
    cout << "1. For int:" << endl;
    TestInt.pop();
    LetterNumber LN3('D', 8);
    LetterNumber LN4('E', 100);
    TestLN.add1(LN3);
    TestLN.add1(LN4);
    cout << "2. For LetterNumber:" << endl;
    TestLN.pop();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test no. 4 \"Amount\"" << endl;
    cout << "1. For int:" << endl;
    TestInt.amount();
    cout << "2. For LetterNumber:" << endl;
    TestLN.amount();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test no. 5 \"Empty\"" << endl;
    cout << "Poping all elements in Fifo int: " << endl;
    TestInt.pop();
    TestInt.pop();
    cout << endl;
    cout << "Check amount" << endl;
    TestInt.amount();
    cout << endl;
    cout << "Is empty?" << endl;
    TestInt.isempty();
    cout << "Testing for Fifo LetterNumber:" << endl << endl;
    TestLN.isempty();
}
