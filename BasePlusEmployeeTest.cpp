#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "BasePlusCommissionEmployee.h"

int main()
{
    BasePlusCommissionEmployee employee( "Bob", "Lewis", "333-33-333", 5000, .04, 300 );

    cout << fixed << setprecision( 2 );

    cout << "Employee information obtained by get functions: \n"
    << "\nFirst Name is " << employee.getFirstName()
    << "\nLast Name is " << employee.getLastName()
    << "\nSocial Security Number is " << employee.getSocialSecurityNumber()
    << "\nGross Sales is " << employee.getGrossSales()
    << "\nCommission Rate is " << employee.getCommissionRate()
    << "\nBase Salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary( 1000 );

    cout << "\nUpdated Employee information output by print function: \n"
    << endl;

    employee.print();

    cout << "\n\nEmployees Earnings $" << employee.earnings() << endl;
    return 0;
}
