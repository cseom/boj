#include <iostream>
using namespace std;


int n;
int a[500000];
int b[500000];
long long result;

void merge(int l, int r, int mid)
{
	int i = l;
	int j = mid + 1;
	int idx = 0;
	while (i <= mid || j <= r)
	{
		if (i <= mid && (j > r || a[i] <= a[j]))
			b[idx++] = a[i++];
		else
		{
			b[idx++] = a[j++];
			result += (long long)mid - i + 1;
		}
	}
	for (int i = l; i <= r; i++)
		a[i] = b[i - l];
}

void msort(int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		msort(l, mid);
		msort(mid + 1, r);
		merge(l, r, mid);
	}
}

int main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	msort(0, n - 1);
	printf("%lld\n", result);
}
