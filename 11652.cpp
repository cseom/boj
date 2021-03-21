#include <iostream>
#include <algorithm>
using namespace std;

long long a[100000];

int	main(void)
{
	int n;
	int cnt = 1;
	int max = 0;
	

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	sort(a, a + n);
	long long ans = a[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
			cnt++;
		else
			cnt = 1;
		if (cnt > max)
		{
			max = cnt;
			ans = a[i];
		}
	}
	printf("%lld", ans);
	return (0);
}
