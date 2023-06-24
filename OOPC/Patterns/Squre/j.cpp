#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, a = 1;
    for (int i = a; i <= n; i++)
    {
        for (int j = a; j <= n; j++)
            cout << setw(2) << j;
        cout << "\n";
    }
}
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5