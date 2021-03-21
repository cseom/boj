#include <iostream>
using namespace std;

long long d[101];

int	main(void)
{
	int t;
	scanf("%d", &t);

	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	for (int i = 4; i <= 100; i++)
		d[i] = d[i - 2] + d[i - 3];

	while (t--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", d[n]);
	}
	return (0);
}
