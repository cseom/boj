#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

int a[100000];
int d[100000];

int	main(void)
{
	int n;
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	d[0] = a[0];
	result = d[0];
	for (int i = 1; i < n; i++)
	{
		d[i] = max(d[i - 1] + a[i], a[i]);
		result = max(d[i], result);
	}
	printf("%d", result);
	return (0);
}
