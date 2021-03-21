#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

int a[10001];
int d[10001];

int	main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	d[1] = a[1];
	d[2] = a[1] + a[2];
	for (int i = 3; i <= n; i++)
	{
		d[i] = max(d[i - 3] + a[i] + a[i - 1], d[i - 2] + a[i]);
	}
	printf("%d", d[n]);
	return (0);
}
