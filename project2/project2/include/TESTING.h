// Kaczmarek Kacper TESTING.h
// Class is made to test class Fifo and Node

#ifndef TESTING_H_INCLUDED
#define TESTING_H_INCLUDED

#include "FIFO.h"
#include "LETTERNUMBER.h"

template <typename T>
class Testing
{
    Fifo<T> Fifo1;
    Fifo<T> Fifo2;

    public:
    bool add1 ( T info )
    {
        if ( Fifo1.add ( info ) )
        {
            cout << "Fifo1: " << Fifo1 << endl;
            return true;
        }
        else
        {
            cout << "Something go wrong.";
            return false;
        }
    }
    bool add2 ( T info )
    {
        if ( Fifo2.add ( info ) )
        {
            cout << "Fifo2: " << Fifo2 << endl;
            return true;
        }
        else
        {
            cout << "Something go wrong." << endl;
            return false;
        }
    }
    bool pop()
    {
        cout << "Should be the first element of Fifo1: " ;
        cout << Fifo1 << endl;
        if ( Fifo1.pop() )
        {
            cout <<"Fifo1 now: " << Fifo1 << endl;
            return true;
        }
        else
        {
            cout << "Fifo is empty" << endl;
            cout << Fifo1 << endl;
        }
        return false;
    }
    bool test_equal()
    {
        cout << "Fifo1: " << Fifo1 << endl;
        cout << "Fifo2: " << Fifo2 << endl;
        if ( Fifo1 == Fifo2 )
            return true;
        else
            return false;
    }
    void amount()
    {
        cout << "Fifo1: " << Fifo1 << endl;
        cout << "Amount of Fifo1 elements returned by function: " <<  Fifo1.howmany() << endl;
    }
    bool isempty()
    {
        cout << "If Fifo1 is empty it should be nothing: " << Fifo1 << endl ;
        cout << "Function should return 1 if Fifo1 is empty: " << Fifo1.isempty() << endl ;
        if ( Fifo1.isempty() )
            return false;
        else
            return true;
    }

};



#endif // TESTING_H_INCLUDED
