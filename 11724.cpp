#include <iostream>
using namespace std;

int n, m, v;
int a[1001][1001];
bool visit[1001];

void dfs(int v)
{
	visit[v] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 1 || a[v][i] == 0)
			continue;
		dfs(i);
	}
}

int main(void)
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		a[n1][n2] = 1;
		a[n2][n1] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			ans++;
			dfs(i);
		}
	}
	printf("%d", ans);
}

