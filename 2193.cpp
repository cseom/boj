#include <stdio.h>

long long d[91];

int	main(void)
{
	int n;
	
	scanf("%d", &n);
	d[1] = 1;
	d[2] = 1;
	for (int i = 3; i <= n; i++)
		d[i] = d[i - 1] + d[i - 2];
	printf("%lld", d[n]);
	return (0);
}
