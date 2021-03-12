#include <iostream>
using namespace std;

int arr[10001];

int	main(void)
{
	int n;
	int k;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		arr[k]++;
	}
	for (int i = 1; i <= 10000; i++)
	{
		while (arr[i]--)
			printf("%d\n", i);
	}
	return (0);
}
