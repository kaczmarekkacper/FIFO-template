
#include <iostream>

#include "Testingg.h"
#include "LETTERNUMBER.h"

using namespace std;


bool Testing::add_pop_int ( int info )
{
    Fifo<int> Fifo;
    int result;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"Add to Fifo<int>\"" << endl;
    cout << "Element to add: " << info << endl;
    if ( Fifo.add ( info ) )
    {
        cout << "Fifo: " << Fifo << endl;
    }
    else
    {
        cout << "Something went wrong.";
    }
    result = Fifo.pop();
    if ( result == info )
    {
        cout << "OK!" << endl;
        return true;
    }
    else
    {
        cout << "Result isnt equal to argument." << endl;
        return false;
    }
}

bool Testing::add_pop_LN ( LetterNumber &info )
{
    Fifo<LetterNumber> Fifo;
    LetterNumber result;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"Add to Fifo<LetterNumber>\"" << endl;
    cout << "Element to add: " << info << endl;
    if ( Fifo.add ( info ) )
    {
        cout << "Fifo: " << Fifo << endl;
    }
    else
    {
        cout << "Something went wrong.";
    }
    result = Fifo.pop();
    if ( result == info )
    {
        cout << "OK!" << endl;
        return true;
    }
    else
    {
        cout << "Result isnt equal to argument." << endl;
        return false;
    }
}
void Testing::isempty_int ( bool agree )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"isempty Fifo<int>\"" << endl;
    if ( agree )
    {
        Fifo<int> Fifo;
        cout << "This Fifo should be empty." << endl;
        cout << "Fifo is empty: " << Fifo.isempty() << endl;
    }
    else
    {
        Fifo<int> Fifo;
        cout << "This Fifo has an object." << endl;
        Fifo.add( 10 );
        cout << "Fifo is empty: " << Fifo.isempty() << endl;
    }
}
void Testing::isempty_LN ( bool agree )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"isempty Fifo<LetterNumber>\"" << endl;
    if ( agree )
    {
        Fifo<LetterNumber> Fifo;
        cout << "This Fifo should be empty." << endl;
        cout << "Fifo is empty: " << Fifo.isempty() << endl;
    }
    else
    {
        Fifo<LetterNumber> Fifo;
        cout << "This Fifo has an object." << endl;
        LetterNumber LN ( 'C', 5 );
        Fifo.add( LN );
        cout << "Fifo is empty: " << Fifo.isempty() << endl;
    }
}
bool Testing::amount_int ( int howmany )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"amount Fifo<Int>\"" << endl;
    Fifo<int> Fifo;
    int i = howmany;
    while ( i )
    {
        Fifo.add ( i );
        i--;
    }
    if ( Fifo.howmany() == howmany )
    {
        cout << "Fifo has " << howmany << " objects and function returned " << Fifo.howmany() << "." << endl;
        cout << "These numbers are the same." << endl;
        return true;
    }
    else
    {
        cout << "Fifo has " << howmany << " objects and function returned " << Fifo.howmany() << "." << endl;
        cout << "These numbers arent the same." << endl;
        return false;
    }
}

bool Testing::amount_LN ( int howmany )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"amount Fifo<LetterNumber>\"" << endl;
    Fifo<LetterNumber> Fifo;
    int i = howmany;
    while ( i )
    {
        LetterNumber LN ( 64+1, i );
        Fifo.add ( LN );
        i--;
    }
    if ( Fifo.howmany() == howmany )
    {
        cout << "Fifo has " << howmany << " objects and function returned " << Fifo.howmany() << "." << endl;
        cout << "These numbers are the same." << endl;
        return true;
    }
    else
    {
        cout << "Fifo has " << howmany << " objects and function returned " << Fifo.howmany() << "." << endl;
        cout << "These numbers arent the same." << endl;
        return false;
    }
}

void Testing::same_int ( bool agree )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"operator== Fifo<int>\"" << endl;
    if ( agree )
    {
        Fifo<int> Fifo1;
        Fifo<int> Fifo2;
        Fifo1.add( 5 );
        Fifo2.add( 5 );
        cout << Fifo1 << endl << Fifo2 << endl;
        cout << "Fifos should be equal." << endl;
        cout << "Fifos are equal: " << (Fifo1==Fifo2) << endl;
    }
    else
    {
        Fifo<int> Fifo1;
        Fifo<int> Fifo2;
        Fifo1.add( 5 );
        Fifo2.add( 10 );
        cout << Fifo1 << endl << Fifo2 << endl;
        cout << "Fifos shouldn't be equal." << endl;
        cout << "Fifos are equal: " << (Fifo1==Fifo2) << endl;
    }
}

void Testing::same_LN ( bool agree )
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Test \"operator== Fifo<LetterNumber>\"" << endl;
    if ( agree )
    {
        Fifo<LetterNumber> Fifo1;
        Fifo<LetterNumber> Fifo2;
        LetterNumber LN( 'C', 5 );
        Fifo1.add( LN );
        Fifo2.add( LN );
        cout << Fifo1 << endl << Fifo2 << endl;
        cout << "Fifos should be equal." << endl;
        cout << "Fifos are equal: " << (Fifo1==Fifo2) << endl;
    }
    else
    {
        Fifo<LetterNumber> Fifo1;
        Fifo<LetterNumber> Fifo2;
        LetterNumber LN( 'C', 5 );
        LetterNumber LN2( 'D', 5 );
        Fifo1.add( LN );
        Fifo2.add( LN2 );
        cout << Fifo1 << endl << Fifo2 << endl;
        cout << "Fifos shouldn't be equal." << endl;
        cout << "Fifos are equal: " << (Fifo1==Fifo2) << endl;
    }
}
