#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

#include <iostream>

#include "NODE.h"

using namespace std;

template < typename T >
class Fifo
{
    Node<T> *head;
    Node<T> *tail;
    Node<T> *temporary;
    Node<T> *pointer;
    int amount;
public:
    Fifo(); // preparing FIFO
    bool add( T info ); // add element to FIFO
    bool pop(); // show first element and delete it
    int get_amount();
    Node<T> * get_head();
    bool operator==( const Fifo<T> &X);
    bool operator!=( const Fifo<T> &X);
    template < typename U >
    friend ostream& operator<<( ostream &, const Fifo<U> & );
};

#endif // FIFO_H_INCLUDED
