#include <iostream>
using namespace std;

int main()
{
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int m, d;
    int check = 0;

    cin >> m >> d;

    for (int i = 0; i < m - 1; i++)
    {
        d += month[i];
    }

    check = d % 7;

    cout << day[check];

    return 0;

}