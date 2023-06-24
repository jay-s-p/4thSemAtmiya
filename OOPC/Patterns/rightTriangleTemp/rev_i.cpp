#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, k = 0;
    for (int i = 1; i <= n; i++, k++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j <= k)
                cout <<setw(2)<< "";
            else
                cout << setw(2) << j;
        }
        cout << "\n";
    }
}