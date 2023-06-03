#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void THO( int, int = 1, int = 2, int = 3 );

int main()
{
    int n;
    cout << "Enter the Number of disk: " << endl;
    cin >> n;
    THO( n );
    return 0;
}

void THO( int n, int from, int aux, int to)
{
    if( n > 0 )
    {
        THO( n - 1, from, to, aux );
        cout << from << " -> " << to << endl;
        THO( n - 1, aux, from, to );
    }
} 
