// Kaczmarek Kacper Node.cpp
// Definitions of functions Node template

#include <iostream>

#include "node.h"
#include "LetterNumber.h"

using namespace std;

template <typename T>
Node<T>::Node( T info )
{
    information = info; // storage
    next = nullptr;
}

template <typename T>
Node<T> * Node<T>::operator++()
{
    return this->next;
}
template <typename T>
bool Node<T>::operator==( const Node<T> &X )
{
    if ( information == X.information )
        return true;
    else
        return false;
}
template <typename T>
Node<T> * Node<T>::new_next( Node<T> *next_next )
{
    next = next_next;
    return next;
}
template <typename T>
Node <T> * Node<T>::get_next ()
{
    return next;
}

template class Node<LetterNumber>;
