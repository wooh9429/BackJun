#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int num = 0, sum = 0;

    cin >> n;

    string str;

    cin >> str;

    for (int i = 0; i < n; i++)
    {
        num = (int)str[i] - '0';
        sum += num;
    }

    cout << sum;

    return 0;
}