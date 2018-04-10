// Kaczmarek Kacper FIFO.h
// Class Fifo templete
// Class Node templete required

#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

#include <iostream>

#include "node.h"

using namespace std;

template < typename T >
class Fifo
{
    Node<T> *head; // first element in FIFO
    Node<T> *tail; // last element in FIFO
    Node<T> *temporary; // helpful to create an objects or to cout
    int amount;
public:
    Fifo(); // preparing FIFO
    ~Fifo(); // deleting FIFO
    bool add( T info ); // add element to FIFO
    bool pop(); // show first element and delete it
    bool operator==( const Fifo<T> &X); // comparing fifos
    bool operator!=( const Fifo<T> &X); // the same as upper
    template < typename U >
    friend ostream& operator<<( ostream &, const Fifo<U> & ); // show fifo
};

template <typename T>
ostream& operator<<( ostream &stream, const Fifo<T> &X )
{
    Node<T> *temporary = X.head;
    while ( temporary )
    {
        stream << (*temporary) << " ";
        temporary = (*temporary).get_next();
    }
    return stream;
}

#endif // FIFO_H_INCLUDED
