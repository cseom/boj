#include <iostream>
using namespace std;


char a[3500][6500];

void solve(int n, int x, int y)
{
	if (n == 3)
	{
		a[y][x] = '*';
		a[y + 1][x - 1] = '*';
		a[y + 1][x + 1] = '*';
		a[y + 2][x - 2] = '*';
		a[y + 2][x - 1] = '*';
		a[y + 2][x] = '*';
		a[y + 2][x + 1] = '*';
		a[y + 2][x + 2] = '*';
		return;
	}
	solve(n / 2, x, y);
	solve(n / 2, x - (n / 2), y + (n / 2));
	solve(n / 2, x + (n / 2), y + (n / 2));
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
			a[i][j] = ' ';
	}
	solve(n, n - 1, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
