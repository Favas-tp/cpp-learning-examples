#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void fun0( int );
void fun1( int );
void fun2( int );


int main()
{
   void (*a[ 3 ])( int )= { fun0, fun1, fun2 };
   (*a[ 0 ])( 0 ); // with dereferencing (*) - better for program clarity
   a[ 1 ]( 1 ); // without dereferencing
   a[ 2 ]( 2 );
   return 0 ;
}
void fun0( int y )
{
   cout << "Funcyion0 -  " << y << endl;
}

void fun1( int y )
{
   cout << "Funcyion1 -  " << y << endl;
}
void fun2( int y )
{
   cout << "Funcyion2 -  " << y << endl;
}