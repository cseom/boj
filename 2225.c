#include <iostream>
using namespace std;

#define MOD 1000000000

long long d[201][201];

int	main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i <= 200; i++)
	{
		d[0][i] = 0;
		d[1][i] = 1;
	}
	for (int i = 2; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= j; l++)
				d[i][j] = (d[i][j] + d[i - 1][j - l]) % MOD;
		}
	}
	printf("%lld", d[k][n]);
	return (0);
}
