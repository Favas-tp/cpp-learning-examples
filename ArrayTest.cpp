//Example : Case Study - Array Class

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"

int main()
{
    Array integers1( 7 );
    Array integers2;

    cout << "size of array integers1 is "
    << integers1.getSize()
    << "\nArray after intialization \n" << integers1;

    cout << "size of array integers2 is "
    << integers2.getSize()
    << "\nArray after intialization \n" << integers2;

    cout << "Enter 17 integers: " << endl;
    cin >> integers1 >> integers2;

    cout << "\nafter input the Array Contains:\n "
    << "integers1: \n" << integers1
    << "integers2: \n" << integers2;

    cout << "Evaluating integers1 != integers2 " << endl;
    if( integers1 != integers2 )
        cout << "not equal" << endl;

    Array integers3( integers1 );
    cout << "size of array integers3 is "
    << integers3.getSize()
    << "\nArray after intialization \n" << integers3;

    cout << "Assigning integers2 to integers1:" << endl;
    integers1 = integers2;  
    cout << "integers1: \n" << integers1
    << "integers2: \n" << integers2;   

    cout << "Evaluating integers1 == integers2 " << endl;
    if( integers1 == integers2 )
        cout << "equal" << endl;

    cout << "\nintegers1[ 5 ] is " << integers1[ 5 ];

    cout << "\n\n Assigning 1000 to integers1[ 5 ]" << endl;
    integers1[ 5 ] = 1000;
    cout << "\nintegers1: \n" << integers1;

    cout << "Attempt to assign 1000 to integers1[ 15 ]" << endl;
    integers1[ 15 ] = 1000;
    return 0;
}