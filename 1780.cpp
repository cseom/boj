#include <iostream>
using namespace std;

int a[2500][2500];
int result[3];

bool check(int x, int y, int n)
{
	int num = a[x][y];
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (num != a[i][j])
				return false;
		}
	}
	return true;
}

void divide(int x, int y, int n)
{
	if (check(x, y, n))
		result[a[x][y]]++;
	else
	{
		int size = n / 3;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				divide(x + size * i, y + size * j, size);
		}
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int input;
			scanf("%d", &input);
			input++;
			a[i][j] = input;
		}
	}
	divide(0, 0, n);
	for (int i = 0; i < 3; i++)
		printf("%d\n", result[i]);
	return 0;
}
