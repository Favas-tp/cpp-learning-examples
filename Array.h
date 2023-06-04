//Example : Case Study - Array Class

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::istream;
using std::ostream;

class Array
{
    friend ostream& operator<<( ostream &, const Array & );
    friend istream& operator>>( istream &, Array & );

 public:
    explicit Array( int = 10 ); //avoiding implicit conversion 
    Array( const Array & );
    ~Array();
    int getSize() const;

    const Array& operator=( const Array & );
    bool operator==( const Array & ) const;

    bool operator!=( const Array &right ) const
    {
        return ! ( *this == right );
    }   

    int& operator[]( int );
    int operator[]( int ) const;

 private:
    int size;
    int *ptr;     
};

#endif