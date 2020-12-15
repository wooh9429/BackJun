#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100] = {};

    cin >> str;

    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];

        if (i % 10 == 9)
        {
            cout << '\n';
        }
    }

    return 0;
}