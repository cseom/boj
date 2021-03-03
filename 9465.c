#include <iostream>
#include <algorithm>
using namespace std;

int d[2][100001];
int st[2][100001];

int	main(void)
{
	int n, t;
	
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < 2; i++)
		{
			for (int j = 1; j <= n; j++)
				scanf("%d", &st[i][j]);
		}
		d[0][0] = 0;
		d[1][0] = 0;
		d[0][1] = st[0][1];
		d[1][1] = st[1][1];
		for (int i = 2; i <= n; i++)
		{
			d[0][i] = max(d[1][i - 1], d[1][i - 2]) + st[0][i];
			d[1][i] = max(d[0][i - 1], d[0][i - 2]) + st[1][i];
		}
		printf("%d\n", max(d[0][n], d[1][n]));
	}
	return (0);
	
}
