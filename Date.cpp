#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Date.h"

Date::Date( int mn, int dy, int yr )
{
    if( mn > 0 && mn <= 12 )
       month = mn;
    else
    {
        month = 1;
        cout << "invlid month (" << mn << ") set to 1 \n";
    }
    year = yr;
    day = checkDay( dy );
    cout << "date object constructor for ";
    print();
    cout << endl;
}

void Date::print() const
{
    cout << month << "/" << day << "/" << year;
}

Date::~Date()
{
    cout << "date object destructor for ";
    print();
    cout << endl;
}

int Date::checkDay( int testDay ) const
{
    static const int daysPerMonth[ 13 ] = 
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if( testDay >= 0 && testDay <= daysPerMonth[ month ] )
       return testDay;
    if( month == 2 && testDay == 2 && ( year % 400 == 0 ||
    ( year % 4 == 0 && year % 100 != 0 ) ) ) 
       return testDay;
    cout << "invlid day (" << testDay << ") set to 1 \n";
    return 1;
}