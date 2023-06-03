#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector<int> & );
void inputVector( vector<int> & );

int main()
{
    vector< int > integers1( 7 );
    vector< int > integers2( 10 );
    cout << "Size of vector integer1 is " << integers1.size()
    << "\nVector after initialization is: " << endl;
    outputVector( integers1 );
    cout << "\nSize of vector integer2 is " << integers2.size()
    << "\nVector after initialization is: " << endl;
    outputVector( integers2 );

    cout << "\n Enter 17 integers: \n";
    inputVector( integers1 );
    inputVector( integers2 );

    cout << "\n after input: \n";
    cout << "integers1" << endl;
    outputVector( integers1 );
    cout << "integers2" << endl;
    outputVector( integers2 );

    cout << "Evaluating int1 != int2\n";
    if( integers1 != integers2 )
        cout << "Not equal\n";
   vector<int> integers3( integers1 );
   cout << "size of int 3 is " << integers3.size() << "\n vector after intualization \n";
   outputVector( integers3 );

   cout << "Assigning int 2 to int 1\n";
   integers1 = integers2;
   cout << "int 1 is: " << endl;
   outputVector( integers1 );   
   cout << "int 2 is: " << endl;
   outputVector( integers2 );   
   cout << "Evakuating int 1 == int 2 \n";
   if( integers1 == integers2 )
      cout << "Equal \n"; 
   cout << "\ninteger1[ 5 ] is " << integers1 [ 5 ];
   cout << "\nAssigninh 1000 to int1[ 5 ] \n";
   integers1[ 5 ]  = 1000;
   outputVector( integers1 );
   cout << "Trying to asign 190 to int1[ 15 ] "; 
   //integers1[ 15 ] = 190;
   cout << "\n my test int1 5 :" << integers1.at( 5 ) << endl;
   integers1.at( 15 )  = 190;
   outputVector( integers1 );

   return 0 ;
}

void outputVector( const vector< int > &array )
{
   size_t i;
   for ( i = 0; i < array.size(); i++ )
   {
      cout << setw( 12 ) << array[ i ];
      if( ( i + 1 ) % 4 == 0 )
          cout << endl;
   }

   if( i % 4 != 0 )
      cout << endl;
}

void inputVector( vector<int> &array )
{
   for( size_t i = 0; i < array.size(); i++ )
      cin >> array[ i ];
}