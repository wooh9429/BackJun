#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int min = 1000000;
    int max = -1000000;

    cin >> n;

    int* str = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];

        if (str[i] < min)
        {
            min = str[i];
        }

        if (str[i] > max)
        {
            max = str[i];
        }
    }

    cout << min << " " << max;

    return 0;
}