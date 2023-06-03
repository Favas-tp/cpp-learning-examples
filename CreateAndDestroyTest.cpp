#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"

void create( void );

CreateAndDestroy first( 1, "(global before main)" );

int main()
{
    cout << "main executing\n";
    CreateAndDestroy second( 2, "(auto in main)" );
    static CreateAndDestroy third( 3, "(static in main)" );
    create();
    cout << "\nmain resume\n";
    CreateAndDestroy fourth( 4, "(auto in main)" );
    cout << "\nmain end\n";
    return 0;
}

void create( void )
{
    cout << "\n function start \n";
    CreateAndDestroy fifth( 5, "(auto in fun)" );
    static CreateAndDestroy sixth( 6, "(static in fun)" );
    CreateAndDestroy seventh( 7, "(auto in fun)" );
    cout << "\n function end \n";

}
