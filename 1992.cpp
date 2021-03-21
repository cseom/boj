#include <iostream>
using namespace std;

int arr[65][65];

void solve(int n, int x, int y)
{
	if (n == 1)
	{
		printf("%d", arr[x][y]);
		return;
	}
	bool zero = true;
	bool one = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (arr[i][j])
				zero = false;
			else
				one = false;
		}
	}
	if (zero)
		printf("0");
	else if (one)
		printf("1");
	else
	{
		printf("(");
		solve(n / 2, x, y);
		solve(n / 2, x, y + n / 2);
		solve(n / 2, x + n / 2, y);
		solve(n / 2, x + n / 2, y + n / 2);
		printf(")");
	}
	return;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%1d", &arr[i][j]);
	}
	solve(n, 0, 0);
}
