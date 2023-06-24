#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, a = 1;
    int k = 1;
    for (int i = a; i <= n; i++, k++)
    {
        for (int j = a; j <= n; j++)
        {
            if (j == k)
                cout << setw(2) << " ";
            else
                cout << setw(2) << i;
        }
        cout << "\n";
    }
}
//    1 1 1 1
//  2   2 2 2
//  3 3   3 3
//  4 4 4   4
//  5 5 5 5