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
    template < typename U >
    friend ostream& operator<<( ostream &, const Node<U> & );
};


#endif // NODE_H_INCLUDED
