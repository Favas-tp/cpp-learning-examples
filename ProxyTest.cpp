#include <iostream>
using std::cout;
using std::endl;

#include "ProxyInterface.h"

int main()
{
    Interface i( 5 );
    cout << "Contains: " << i.getValue() << "before set" << endl;
    i.setValue( 10 );
    cout << "Contains: " << i.getValue() << "after set" << endl;
    return 0;
}
