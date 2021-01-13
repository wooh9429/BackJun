#include <iostream>
using namespace std;

int main()
{
	int n, count = 0, sum = 0, f = 0, b = 0, fSum = 0;
	cin >> n;

	fSum = n;
	for (;;)
	{
		f = fSum / 10;
		b = fSum % 10;

		sum = f + b;

		fSum = (b * 10) + (sum % 10);

		count++;

		if (fSum == n)
		{
			cout << count;
			break;
		}
	}

	return 0;
}