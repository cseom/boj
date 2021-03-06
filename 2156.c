#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

long long a[10001];
long long d[10001];

int	main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &a[i]);
	d[1] = a[1];
	d[2] = a[1] + a[2];
	for (int i = 3; i <= n; i++)
	{
		d[i] = max(d[i - 3] + a[i] + a[i - 1], d[i - 2] + a[i]);
		d[i] = max(d[i - 1], d[i]);
	}
	printf("%lld", d[n]);
	return (0);
}
