#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int x, y;
	vector<pair<int, int>> p;

	cin >> n;
	vector<int> ans(n);
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		ans[i] = 1;
		p.push_back({ x, y });
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (p[i].first < p[j].first && p[i].second < p[j].second)
				ans[i] += 1;
		}
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << ' ';
}
