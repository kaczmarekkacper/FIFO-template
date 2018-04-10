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
    Node <T> * operator++(); // incrementing pointers
    bool operator==( const Node<T> &X ); // comparing Nodes
    Node <T> * new_next ( Node<T> *next_next ); // next is private so cant change it by =
    Node <T> * get_next (); // cant get next in some functions
    template < typename U >
    friend ostream& operator<<( ostream &, const Node<U> & ); // show Node
};

template <typename T>
ostream& operator<<( ostream &stream, const Node<T> &X )
{
    stream << X.information ;
    return stream;
}
#endif // NODE_H_INCLUDED
