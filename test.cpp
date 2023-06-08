#include<iostream>
using namespace std;

int main()
{ 
   int n = 10;
   int a[ n ] = { 100,2,3,1000,5,6,7,8,9,10 };
   int B = 4;
   int max = 0, temp = 0;

   for( int i = 0; i < B; i++ )
   {
      max += a[ i ];
   }
   temp = max;
   for( int i = B - 1 ; i >= 0; i-- )
   {
      temp -= a[ i ];
      
      for( static int j = 1; j <= B;  )
      {
            temp += a[ n - j ];
            //cout << " j " << j << endl;
            j++;
            break;
      }   
      if( temp > max )
         max = temp;   
   }
   cout << "max is : " << max;

   return 0 ;
}