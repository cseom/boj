#include <stdio.h>

int d[1001];

int	main(void)
{
	int n, t;

	
	scanf("%d", &t);
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 4; i <= n; i++)
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		printf("%d\n", d[n]);
	}
	return (0);
}
