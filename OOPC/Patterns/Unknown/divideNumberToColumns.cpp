#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int n = 9, a = 0;
    int x = 2;
    for (int i = a; i <= n; i++)
    {
        for (int j = a; j <= n; j++)
        {
            if (j % x == 0)
                cout << setw(2) << " ";
            // else
            cout << setw(2) << j;
        }
        cout << "\n";
    }
}