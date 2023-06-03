//Example : Overloading stream insertion and Extraction operators

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "PhoneNumber.h"

int main()
{
    PhoneNumber phone;
    cout << "Enter the Phone Number in the form (123) 456-7890:" 
    <<  endl;

    cin >> phone;

    cout << "Phone Number is: ";
    cout << phone << endl;
    return 0;
}