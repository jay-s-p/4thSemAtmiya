#include <iostream>
using namespace std;
main()
{
    short a = 11;
    cout << "Size of a                 = " << sizeof(a) << endl; // Size of a = 2

    // Explicit converstion
    cout << "Size of (int) a           = " << sizeof((int) a) << endl; // here it will convert to int explicitly
    // cout << "Size of (a + 0.1)         = " << sizeof(a + 0.1) << endl;  // it will covert to double automatically
    cout << "Size of (float)(a + 0.1)  = " << sizeof((float)(a + 0.1)) << endl; // here it will convert to float explicitly
    cout << "Size of (short)(a + 0.1)  = " << sizeof((short)(a + 0.1)) << endl; // convert to short explicitly
}