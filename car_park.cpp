#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::left;
using std::right;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <cmath>
using namespace std;

float Total = 0;
float calculateCharge( float );

int main()
{
    float cus1, cus2, cus3;
    cout << "Enter the three customer parking time: ";
    cin >> cus1 >> cus2 >> cus3;
    cout << left << setw( 10 ) << "Car" << setw( 10 )  << "Hours" << "charge" << endl;
    cout << fixed << setprecision( 1 );
    cout << setw( 10 ) << "1" << setw( 10 ) << cus1 << fixed << setprecision( 2 ) << calculateCharge( cus1 ) << endl ;
    cout << fixed << setprecision( 1 );
    cout << left << setw( 10 ) << "2" << setw( 10 ) << cus2 << fixed << setprecision( 2 ) <<  calculateCharge( cus2 ) << endl ;
    cout << fixed << setprecision( 1 );
    cout << left << setw( 10 ) << "3" << setw( 10 ) << cus3 << fixed << setprecision( 2 ) <<  calculateCharge( cus3 ) << endl ;
    cout << fixed << setprecision( 1 );
    cout << left << setw( 10 ) << "Total" << setw( 10 ) << cus1+cus2+cus3 << fixed << setprecision( 2 ) << Total;
    return 0;
}

float calculateCharge( float hour )
{
    float charge;
    if( hour <= 3)
       charge = 2.00;
    else if ( hour == 24 )
       charge = 10.00;
    else
    {
       int noHour;
       hour -= 3.0;
       hour = ceil( hour );
       noHour = hour / 1;
       charge = 2.0 + noHour * 0.50;
    }   
  Total += charge;  
  return charge;  
}