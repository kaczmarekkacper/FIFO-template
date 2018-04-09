// Kaczmarek Kacper Fifo.cpp
// Definitions of functions Fifo template

#include <iostream>

#include "FIFO.h"
#include "NODE.h"

using namespace std;

template < typename T >
Fifo<T>::Fifo()
{
    head = nullptr;
    tail = nullptr;
    amount = 0;
    temporary = nullptr;
}
template < typename T >
bool Fifo<T>::add( T info )
{
    if ( temporary = new Node<T> ( info ) )
    {
        if ( head ) // if FIFO isn't empty
        {
            tail->next = temporary;
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
template <typename T>
bool Fifo<T>::pop()
{
    if ( head ) // if FIFO isn't empty
    {
        temporary = head->next;
        cout << "First element of FIFO: ";
        cout << head << endl;
        delete head;
        head = temporary;
        amount--;
        temporary = nullptr;
        return true;
    }
    else // if FIFO is empty
        return false;
}
template < typename T >
bool Fifo<T>::operator==( const Fifo<T> &X )
{
    if ( amount() == X.amount() ) // FIFOs can be the same only if they amounts are equal
    {
        Node<T> *temporary2; // creating new helping pointer
        temporary = head;
        temporary2 = X.head;
        while ( !temporary->next )
        {
            if ( temporary = temporary2 )
            {
                temporary++;
                temporary2++;
            }
            else
                break;
        }
        if ( temporary->next ) // if while ends before reach end
        {
            temporary = nullptr;
            return true;
        }
    }
    // if amount isn't equal or all element are the same
    temporary = nullptr;
    return false;
}
template < typename T >
bool Fifo<T>::operator!=( const Fifo<T> &X )
{
    return !( *this == X );
}
template <typename T>
ostream& operator<<( ostream &stream, const Fifo<T> &X )
{
    Node<T> *temporary = X.head;
    while ( temporary )
    {
        stream << temporary << " ";
        temporary = temporary->next;
    }
    return stream;
}

