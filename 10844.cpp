#include <stdio.h>

#define MOD 1000000000
int d[101][11];

int	main(void)
{
	int n;
	int res = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		d[0][i] = 0;
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = d[i - 1][1];
		d[i][10] = 0;
		for (int j = 1; j < 10; j++)
		{
			d[i][j] = (d[i - 1][j - 1] + d[i - 1][j + 1]) % MOD;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		res += d[n][i];
		res %= MOD;
	}
	printf("%d", res);
	return (0);
}
