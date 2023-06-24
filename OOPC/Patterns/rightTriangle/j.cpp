#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, k = 5;
    for (int i = n; i >= 1; i--, k--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= k-1)
                cout <<setw(2)<< "";
            else
                cout << setw(2) << j;
        }
        cout << "\n";
    }
}