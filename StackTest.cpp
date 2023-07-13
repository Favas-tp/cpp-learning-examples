#include <iostream>
using std::cout;
using std::endl;

#include "Stack.h"

int main()
{
    Stack< double > doubleStack( 5 );
    double doubleValue = 1.1;

    cout << "Pushing element onto double stack\n";

    while( doubleStack.push( doubleValue ) )
    {
        cout << doubleValue << ' ';
        doubleValue += 1.1;
    }

    cout << "\nStack is full, cannot push " << doubleValue
    << "\n\nPoping double elements from stack\n";

    while( doubleStack.pop( doubleValue ) )
       cout << doubleValue << ' ';

    cout << "\nStack is empty. cannot pop\n";

    Stack< int > intStack;
    int intValue = 1;

    cout << "\n\nPushing element onto int stack\n";

    while( intStack.push( intValue ) )
    {
        cout << intValue << ' ';
        intValue++;
    }

    cout << "\nStack is full, cannot push " << intValue
    << "\n\nPoping int elements from stack\n";

    while( intStack.pop( intValue ) )
       cout << intValue << ' ';

    cout << "\nStack is empty. cannot pop\n";
    return 0;
}