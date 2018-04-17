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
    Node( T info )
    {
        information = info; // storage
        next = nullptr;
    }
    Node <T> * operator++() // incrementing pointers
    {
        return this->next;
    }
    bool operator==( const Node<T> &X ) // comparing Nodes
    {
        if ( information == X.information )
            return true;
        else
            return false;
    }
    Node <T> * new_next ( Node<T> *next_next ) // next is private so cant change it by =
    {
        next = next_next;
        return next;
    }
    Node <T> * get_next () // cant get next in some functions
    {
        return next;
    }
    friend ostream& operator<<( ostream &stream, const Node<T> &X ) // show Node
    {
        stream << X.information ;
        return stream;
    }
};


#endif // NODE_H_INCLUDED
