#include <stdio.h>

int main()
{
	int number;
	double MAX;
	double SUM = 0;

	scanf("%d", &number);

	double point[number] = { 0 };

	for (int i = 0; i < number; i++)
	{
		scanf("%lf", &point[i]);
	}

	for (int i = 0; i < number; i++)
	{
		if (point[i] > MAX)
		{
			MAX = point[i];
		}
	}

	for (int i = 0; i < number; i++)
	{
		SUM = SUM + (point[i] / MAX) * 100;
	}

	printf("%lf", SUM / number);

}