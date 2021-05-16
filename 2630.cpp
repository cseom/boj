#include <iostream>
using namespace std;

int a[130][130];

int cnt[2];

void solve(int n, int x, int y)
{
	if (n == 1)
	{
		cnt[a[x][y]]++;
		return;
	}
	bool white = true;
	bool blue = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (a[i][j])
				white = false;
			else
				blue = false;
		}
	}
	if (white)
		cnt[0]++;
	else if (blue)
		cnt[1]++;
	else
	{
		solve(n / 2, x, y);
		solve(n / 2, x, y + n / 2);
		solve(n / 2, x + n / 2, y);
		solve(n / 2, x + n / 2, y + n / 2);
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	solve(n, 0, 0);
	cout << cnt[0] << '\n' << cnt[1] << '\n';
	return 0;
}
