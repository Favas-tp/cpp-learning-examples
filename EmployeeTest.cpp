#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Employee.h"

int main()
{
    Date birth( 7, 24, 1949 );
    Date hire( 3, 12, 1988 );
    Employee manager( "bob", "blue", birth, hire );
    cout << endl;
    manager.print();

    cout << "\n test invalid \n";
    Date lastDay( 14, 35, 1994 );
    cout << endl;
    return 0; 
}