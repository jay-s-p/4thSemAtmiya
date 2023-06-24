#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, a = 1;
    int k = 1;
    for (int i = a; i <= n; i++,k++)
    {
        for (int j = a; j <= n; j++)
        {
            if(j == k)
                cout << setw(2) << " ";
            else
                cout << setw(2) << j;
        }
        cout << "\n";
    }
}
//    2 3 4 5
//  1   3 4 5
//  1 2   4 5
//  1 2 3   5
//  1 2 3 4