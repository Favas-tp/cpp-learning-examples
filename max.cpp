#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "maximum.h"

int main()
{
    int int1, int2, int3 ;
    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;
    cout << "The maximum integer value is: " << maximum( int1, int2, int3 );

    double double1, double2, double3;
    cout << "\nInput three double values: ";
    cin >> double1 >> double2 >> double3;
    cout << "The maximum double value is: " << maximum( double1, double2, double3 );

    char char1, char2, char3;
    cout << "\nInput three characters values: ";
    cin >> char1 >> char2 >> char3;
    cout << "The maximum character value is: " << maximum( char1, char2, char3 ) << endl;
    return 0;
}