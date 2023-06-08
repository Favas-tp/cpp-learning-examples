#include <iostream>
using std::cout;

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee( const string &first, const string &last, const string &ssn,
 double sales, double rate )
   : firstName( first ), lastName( last ), SocialSecurityNumber( ssn )
{
    setGrossSales( sales );
    setCommissionRate( rate );
}   

void CommissionEmployee::setFirstName( const string &first )
{
    firstName = first;
}

string CommissionEmployee::getFirstName() const
{
    return firstName;
}


void CommissionEmployee::setLastName( const string &last )
{
    firstName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
    SocialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return SocialSecurityNumber;
}

void CommissionEmployee::setGrossSales( double sales )
{
    grossSales = ( sales < 0.0 ) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const
{
    cout << "Commsission employee: "
    << getFirstName() << ' ' << getLastName() 
    << "\nSocial secueity number: " << getSocialSecurityNumber()
    << "\nGross sales: " << getGrossSales()
    << "\nCommission Rate: " << getCommissionRate();
}
