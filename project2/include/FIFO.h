// Kaczmarek Kacper FIFO.h
// Class Fifo templete
// Class Node templete required

#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

#include <iostream>

#include "NODE.h"

using namespace std;

template < typename T >
class Fifo
{
    Node<T> *head; // first element in FIFO
    Node<T> *tail; // last element in FIFO
    Node<T> *temporary; // helpful to create an objects or to cout
    int amount;
public:
    Fifo() // preparing FIFO
    {
        head = nullptr;
        tail = nullptr;
        amount = 0;
        temporary = nullptr;
    }
    ~Fifo() // deleting FIFO
    {
        if ( head )
        {
            do
            {
                temporary = (*head).get_next();
                delete head;
                head = temporary;
                amount--;
            }
            while ( head );
        }
    }
    bool add( T info ) // add element to FIFO
    {
        if (( temporary = new Node<T> ( info ) ))
        {
            if ( head ) // if FIFO isn't empty
            {
                (*tail).new_next( temporary );
                tail = temporary;
            }
            else // if fifo is empty
            {
                head = temporary;
                tail = temporary;
            }
            temporary = nullptr;
            amount++;
            return true;
        }
        else // if new doesn't work
            return false;
    }
    bool pop() // show first element and delete it
    {
        if ( head ) // if FIFO isn't empty
        {
            temporary = (*head).get_next();
            cout << "First element of FIFO: ";
            cout << (*head) << endl;
            delete head;
            head = temporary;
            amount--;
            temporary = nullptr;
            return true;
        }
        else // if FIFO is empty
            return false;
    }
    bool operator==( const Fifo<T> &X) // comparing fifos
    {
        if ( amount == X.amount ) // FIFOs can be the same only if they amounts are equal
        {
            Node<T> *temporary2; // creating new helping pointer
            temporary = head;
            temporary2 = X.head;
            while ( !((*temporary).get_next() ) )
            {
                if ( temporary == temporary2 )
                {
                    temporary++;
                    temporary2++;
                }
                else
                    break;
            }
            if ( (*temporary).get_next() ) // if while ends before reach end
            {
                temporary = nullptr;
                return true;
            }
        }
        // if amount isn't equal or all element are the same
        temporary = nullptr;
        return false;
    }
    bool operator!=( const Fifo<T> &X) // the same as upper
    {
        return !( *this == X );
    }
    template < typename U >
    friend ostream& operator<<( ostream &stream, const Fifo<U> &X ) // show fifo
    {
        Node<U> *temporary = X.head;
        while ( temporary )
        {
            stream << (*temporary) << " ";
            temporary = (*temporary).get_next();
        }
        return stream;
    }
};

#endif // FIFO_H_INCLUDED
