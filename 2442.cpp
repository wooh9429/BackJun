#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= n - (i + 1); k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (i - 1) + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}