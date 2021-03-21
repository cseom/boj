#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int a[1000001];
int b[1000001];
int ans[1000001];

void merge()
{
	int i = 0, j = 0, k = 0;
	while (i < n && j < m)
	{
		if (a[i] <= b[j])
			ans[k++] = a[i++];
		else
			ans[k++] = b[j++];
	}
	while (i < n)
		ans[k++] = a[i++];
	while (j < m)
		ans[k++] = b[j++];
}

int main(void)
{

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	merge();
	for (int i = 0; i < n + m; i++)
		printf("%d ", ans[i]);
	return 0;
}
