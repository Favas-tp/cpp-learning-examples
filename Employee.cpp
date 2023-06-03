#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<cstring>
using std::strlen;
using std::strncpy;

#include "Date.h"
#include "employee.h"

Employee::Employee( const char * const first, const char * const last,
       const Date &dateOfBirth, const Date &dateOfHire )
          : birthDate( dateOfBirth ),
            hireDate( dateOfHire )
       {
          int length = strlen( first );
          length = ( length < 25 ? length : 24 );
          strncpy( firstName, first, length );
          firstName[ length ] = '\0';

          length = strlen( last );
          length = ( length < 25 ? length : 24 );
          strncpy( lastName, last, length );
          lastName[ length ] = '\0';

          cout << "Employee object constructor: " << firstName << " " 
          << lastName << endl;

       }

void Employee::print() const
{
   cout << lastName << " " << firstName << " Hired: ";
   hireDate.print();
   cout << " birth day: ";
   birthDate.print();
   cout << endl;
}

Employee::~Employee()
{
   cout << "Employee object destructor: " << firstName << " " 
          << lastName << endl;
}