#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //string 规过
    string str = "";
    int a, b, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        a = str[0] - '0';
        b = str[2] - '0';

        cout << a + b << '\n';
    }

    return 0;

    ////char 规过
    //string str = "";
    //int a, b, n;
    //char c;

    //cin >> n;

    //for (int i = 0; i < n; i++)
    //{
    //    cin >> a >> c >> b;

    //    cout << a + b << '\n';
    //}

    //return 0;
}