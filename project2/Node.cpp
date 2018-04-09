#include <iostream>

#include "NODE.h"

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
ostream& operator<<( ostream &stream, const Node<T> &X )
{
    stream << X.information ;
    return stream;
}
