#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (i == n)
            {
                for (int m = 0; m < (2 * n) - 1; m++)
                {
                    cout << "*";
                }
                return 0;
            }

            if (j == 1 || j == (2 * i) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
}