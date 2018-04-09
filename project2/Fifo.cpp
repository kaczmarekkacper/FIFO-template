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
    pointer = nullptr;
}
template < typename T >
bool Fifo<T>::add( T info )
{
    if ( temporary = new Node<T> ( info ) )
    {
        if ( head ) // if FIFO is empty
        {
            tail->next = temporary;
            tail = temporary;
        }
        else
        {
            head = temporary;
            tail = temporary;
        }
        temporary = nullptr;
        amount++;
        return true;
    }
    else
        return false;
}
template <typename T>
bool Fifo<T>::pop()
{
    if ( head )
    {
        temporary = head->next;
        cout << "First element of FIFO:";
        cout << head << endl;
        delete head;
        head = temporary;
        amount--;
        temporary = nullptr;
        return true;
    }
    else
        return false;
}
template < typename T >
int Fifo<T>::get_amount()
{
    return amount;
}
template < typename T >
Node<T> * Fifo<T>::get_head()
{
    return head;
}
template < typename T >
bool Fifo<T>::operator==( const Fifo<T> &X )
{
    if ( amount() == X.amount() )
    {
        Node<T> *temporary2;
        temporary = head;
        temporary2 = X.get_head();
        while ( !temporary->next )
        {
            if ( temporary->information = temporary2->information )
            {
                temporary++;
                temporary2++;
            }
            else
                break;
        }
        if ( temporary->next )
        {
            temporary = nullptr;
            return true;
        }
    }
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

/*
    cout << "What do you want to add? " << endl;
    cin >> info;
    while ( cin.bad() )
    {
        cout << "Something went wrong. Please try again." << endl;
        cin.clear();
        cin.sync();
        cin >> info;
    }
*/

