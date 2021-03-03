#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

int a[1001];
int d[1001];

int	main(void)
{
	int n;
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		d[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && d[j] + 1 > d[i])
				d[i] = d[j] + 1;
		}
	}
	for (int i = 0; i < n; i++)
		result = max(result, d[i]);
	printf("%d", result);
	return (0);
}