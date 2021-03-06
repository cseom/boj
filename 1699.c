#include <iostream>
using namespace std;

#define min(a, b) ((a) < (b) ? (a) : (b))

int d[100001];

int	main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
		d[i] = i;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j * j <= i; j++)
			d[i] = min(d[i], d[i - j * j] + 1);
	}
	printf("%d", d[n]);
	return (0);
}
