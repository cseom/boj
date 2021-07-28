#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int n;
int s[21][21];


int	sol(int cnt, vector<int> &a, vector<int> &b)
{
	if (cnt == n)
	{
		if (a.size() != n / 2 || b.size() != n / 2)
			return -1;
		int start = 0;
		int link = 0;

		for (int i = 0; i < n / 2; i++)
		{
			for (int j = 0; j < n / 2; j++)
			{
				start += s[a[i]][a[j]];
				link += s[b[i]][b[j]];
			}
		}
		int status = abs(start - link);
		return (status);
	}
	int ans = -1;
	if (a.size() > n / 2 || b.size() > n / 2)
		return -1;
	a.push_back(cnt);
	int start = sol(cnt + 1, a, b);
	if (ans == -1 || (start != -1 && ans > start))
		ans = start;
	a.pop_back();
	b.push_back(cnt);
	int link = sol(cnt + 1, a, b);
	if (ans == -1 || (link != -1 && ans > link))
		ans = link;
	b.pop_back();
	return ans;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> s[i][j];
	}
	vector<int> a, b;
	cout << sol(0, a, b);
}
