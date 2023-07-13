#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Stack.h"

template< typename T >
void testStack( Stack< T > &theStack, T value, T increment, const string stackName )
{
    cout << "Pushing element onto " << stackName << '\n';

    while( theStack.push( value ) )
    {
        cout << value << ' ';
        value += increment;
    }

    cout << "\nStack is full, cannot push " << value
    << "\n\nPoping elements from " << stackName << "\n";

    while( theStack.pop( value ) )
       cout << value << ' ';

    cout << "\nStack is empty. cannot pop\n" << endl;

}
int main()
{
    Stack< double > doubleStack( 5 );
    Stack< int > intStack;
    
    testStack( doubleStack, 1.1, 1.1, "doubleStack" );
    testStack( intStack, 1, 1, "intStack" );

    return 0;
}
