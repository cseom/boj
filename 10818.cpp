#include <iostream>

int	main(void)
{
	int n;
	int k;
	int min = 1000000;
	int max = -1000000;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		if (max < k)
			max = k;
		if (min > k)
			min = k;
	}
	printf("%d %d", min, max);
	return (0);
}