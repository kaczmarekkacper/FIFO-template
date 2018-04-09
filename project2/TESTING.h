#ifndef TESTING_H_INCLUDED
#define TESTING_H_INCLUDED

#include <iostream>

using namespace std;

class Testing
{
    char letter;
    int number;
public:
    Testing();
    void operator= ( const Testing &X );
    friend ostream& operator<<( ostream &, const Testing & );
    bool operator== ( const Testing &X );
    bool operator!= ( const Testing &X );
};

#endif // TESTING_H_INCLUDED
