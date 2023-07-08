#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include <typeinfo>

#include "EmployeeN.h"
#include "SalariedEmployeeN.h"
#include "HourlyEmployeeN.h"
#include "CommissionEmployeeN.h"
#include "BasePlusCommissionEmployeeN.h"

int main()
{
    cout << fixed << setprecision( 2 );
    vector < Employee * > employees( 4 );
   
    employees[ 0 ] = new  SalariedEmployee( "john", "snith", "111-11-1111", 800 );
    employees[ 1 ] = new HourlyEmployee( "karen", "price", "222-22-2222", 16.75, 40 );
    employees[ 2 ] = new CommissionEmployee( "sue", "jones", "333-33-3333", 10000, .06 );
    employees[ 3 ] = new BasePlusCommissionEmployee( "bob", "lewis", "444-44-4444", 5000, .04, 300 );

    for( size_t i = 0; i < employees.size() ; i++ )
    {
        employees[ i ] -> print();
        cout << endl;

        BasePlusCommissionEmployee *derivedPtr = dynamic_cast <BasePlusCommissionEmployee *> ( employees[ i ] );

        if( derivedPtr != 0 )
        {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "Old base salary: " << oldBaseSalary << endl;
            derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
            cout << "new base salary with 10% increase is: " <<  derivedPtr->getBaseSalary()  << endl;
        }

        cout << "\nearned " << employees[ i ] -> earnings() << "\n\n";

    }
    
    for( size_t j = 0; j < employees.size() ; j++ )
    {
        cout << "Deleting object of " << typeid( *employees[ j ] ).name() << endl;

        delete employees[ j ];
    }

    return 0;    
}

