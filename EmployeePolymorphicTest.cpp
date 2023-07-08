#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "EmployeeN.h"
#include "SalariedEmployeeN.h"
#include "HourlyEmployeeN.h"
#include "CommissionEmployeeN.h"
#include "BasePlusCommissionEmployeeN.h"

void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main()
{
    cout << fixed << setprecision( 2 );
    SalariedEmployee salariedEmployee( "john", "snith", "111-11-1111", 800 );
    HourlyEmployee hourlyEmployee( "karen", "price", "222-22-2222", 16.75, 40 );
    CommissionEmployee commissionEmployee( "sue", "jones", "333-33-3333", 10000, .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee( "bob", "lewis", "444-44-4444", 5000, .04, 300 );

    cout << "Employees processed individually using static binding: \n\n";

    salariedEmployee.print();
    cout << "\nearned: " << salariedEmployee.earnings() << "\n\n";
    hourlyEmployee.print();
    cout << "\nearned: " << hourlyEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned: " << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned: " << basePlusCommissionEmployee.earnings() << "\n\n";

    vector < Employee * > employees( 4 );

    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &hourlyEmployee;
    employees[ 2 ] = &commissionEmployee;
    employees[ 3 ] = &basePlusCommissionEmployee;

    cout << "Employees processeed polymorphically via dynamic binding: \n\n";

    cout << "virtual function calls made off base - class pointers:\n\n";

    for( size_t i = 0; i < employees.size() ; i++ )
        virtualViaPointer( employees[ i ] );

    cout << "virtual function calls made off base - class references:\n\n";

    for( size_t i = 0; i < employees.size() ; i++ )
        virtualViaReference( *employees[ i ] );

    return 0;    
}


void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr -> print();
    cout << "\nearned " << baseClassPtr -> earnings() << "\n\n";
}

void virtualViaReference( const Employee & baseClassRef )
{
    baseClassRef.print();
    cout << "\nearned " << baseClassRef.earnings() << "\n\n";
}

