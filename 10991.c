#include <iostream>

int	main(void)
{
	int n;
	int k;

	scanf("%d", &n);
	k = n - 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < k; j++)
			printf(" ");
		k--;
		for (int j = 0; j < 2 * i - 1; j++)
		{
			if (j % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}