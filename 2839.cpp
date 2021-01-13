#include <stdio.h>

int main(void)
{
	int s, sum = 0, count = 0;

	scanf("%d", &s);
	sum = s;
	while (1)
	{
		if (sum % 5 == 0)
		{
			count = count + (sum / 5);
			break;
		}

		sum -= 3;
		count++;
	}
	if (sum < 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", count);
		return 0;
	}
}