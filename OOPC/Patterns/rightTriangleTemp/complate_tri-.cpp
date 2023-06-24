#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << setw(2) << j;
        cout << "\n";
    }
    // for (int i = n; i >= 1; i--)
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << setw(2) << j;
        cout << "\n";
    }
}
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1