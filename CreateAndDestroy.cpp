#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"

CreateAndDestroy::CreateAndDestroy( int ID, string messageString )
{
    objectID = ID;
    message = messageString;
    cout << objectID << " Constructor " << message << endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
     cout << ( objectID == 1 || objectID == 6 ? "\n" : "");
     cout << objectID << " Destructor " << message << endl;
}