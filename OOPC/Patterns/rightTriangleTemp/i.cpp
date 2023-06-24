#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 5, k = 0;
    for (int i = 1; i <= n; i++, k++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= k)
                cout <<setw(2)<< "";
            else
                cout << setw(2) << i;
        }
        cout << "\n";
    }
}