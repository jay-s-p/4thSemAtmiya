#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << setw(2) << i;
        cout << "\n";
    }
}
//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5