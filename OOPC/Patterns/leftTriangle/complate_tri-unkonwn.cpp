#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, k = 0;
    for (int i = n; i >= 1; i--, k++)
    {
        for (int j = n; j >= i; j--)
        {
            if (j <= k)
                cout <<setw(2)<< "";
            else
                cout << setw(2) << j;
        }
        cout << "\n";
    }
}