#include <iostream>
using std::cout;

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last, const string &ssn,
 double sales, double rate, double salary )
   : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary );
}   
