#include <stdio.h>

#define MOD 10007
int d[1001][11];

int	main(void)
{
	int n;
	int res = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = j; k < 10; k++)
				d[i][j] += (d[i - 1][k] % MOD);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		res += d[n][i];
		res %= MOD;
	}
	printf("%d", res);
	return (0);
}
