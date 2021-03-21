#include <iostream>
using namespace std;

void solve(int n, int x, int y)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			solve(n / 3, x, y);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			solve(n, i, j);
		printf("\n");
	}
}
