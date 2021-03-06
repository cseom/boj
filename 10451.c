#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[1001];
bool visit[1001];
int n;

void dfs(int k)
{
	visit[k] = true;
	int len = a[k].size();
	for (int i = 0; i < len; i++)
	{
		int next = a[k][i];
		if (!visit[next])
			dfs(next);
	}
}

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--)
	{
		int ans = 0;
		for (int i = 0; i <= 1000; i++)
		{
			visit[i] = false;
			a[i].clear();
		}
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			int k;
			scanf("%d", &k);
			if (i != k)
				a[i].push_back(k);
			a[k].push_back(i);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i])
			{
				ans++;
				dfs(i);
			}
		}
		printf("%d\n", ans);
	}
	return (0);
}

