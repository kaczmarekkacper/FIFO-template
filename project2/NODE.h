// Kaczmarek Kacper NODE.h
// Class Node template

#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>

using namespace std;

template < typename T >
class Node
{
    T information;
    Node<T> *next;
public:
    Node( T info );
    Node<T> * operator++();
    bool operator==( const Node<T> &X );
    template < typename U >
    friend ostream& operator<<( ostream &, const Node<U> & );
};


#endif // NODE_H_INCLUDED
