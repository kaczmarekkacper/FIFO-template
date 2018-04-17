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
    T pop() // show first element and delete it
    {
        if ( head ) // if FIFO isn't empty
        {
            temporary = (*head).get_next();
            cout << "First element of FIFO: ";
            cout << (*head) << endl;
            Node<T>* sth;
            *sth=*head;
            delete head;
            head = temporary;
            amount--;
            temporary = nullptr;
            return (*sth).get_info();
        }
        else // if FIFO is empty
            return 0;
    }
    bool operator==( const Fifo<T> &X) // comparing fifos
    {
        if ( amount == X.amount ) // FIFOs can be the same only if they amounts are equal
            {
                if ( amount )
                {
                    Node<T> *temporary2; // creating new helping pointer
                    temporary = head;
                    temporary2 = X.head;
                    if ( amount == 1 )
                    {
                        if ( (*temporary) == (*temporary2) )
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    do
                    {
                        if ( (*temporary) == (*temporary2) )
                        {
                            temporary = (*temporary).get_next();
                            temporary2 = (*temporary2).get_next();
                        }
                        else
                            break;
                    }
                    while ( !(*temporary).get_next() );
                    if ( !(*temporary).get_next() ) // if while ends before reach end
                    {
                        temporary = nullptr;
                    return true;
                    }
                }
                else
                    return true;
            }
            // if amount isn't equal or all element are the same
            temporary = nullptr;
            return false;
    }
    bool operator!=( const Fifo<T> &X) // the same as upper
    {
        return !( *this == X );
    }
    int howmany()
    {
        return amount;
    }
    bool isempty()
    {
        if ( amount )
        {
            return false;
        }
        return true;
    }
    friend ostream& operator<<( ostream &stream, const Fifo<T> &X ) // show fifo
    {
        Node<T> *temporary = X.head;
        while ( temporary )
        {
            stream << (*temporary) << ", ";
            temporary = (*temporary).get_next();
        }
        temporary = nullptr;
        return stream;
    }
};

#endif // FIFO_H_INCLUDED
