#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
            cout << setw(2) << j;
        cout << "\n";
    }
}
//  5
//  5 4
//  5 4 3
//  5 4 3 2
//  5 4 3 2 1