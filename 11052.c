#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

long long d[1001];
long long arr[1001];

int	main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld", &arr[i]);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			d[i] = max(d[i], d[i - j] + arr[j]);
	}
	printf("%lld", d[n]);
	return (0);
}
