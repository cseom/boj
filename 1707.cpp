#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> a[20001];
int visit[20001];

/*
void dfs(int v, int color)
{
	visit[v] = color;
	int len = a[v].size();
	for (int i = 0; i < len; i++)
	{
		int next = a[v][i];
		if (!visit[next])
			dfs(next, 3 - color);
	}
}
*/

void bfs(int v, int color)
{
	visit[v] = color;
	queue<int> q;
	q.push(v);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (visit[now] == 1)
			color = 2;
		else
			color = 1;
		int len = a[now].size();
		for (int i = 0; i < len; i++)
		{
			int next = a[now][i];
			if (!visit[next])
			{
				visit[next] = color;
				q.push(next);
			}
		}
	}
}

bool isBigraph(void)
{
	for (int i = 1; i <= n; i++)
	{
		int len = a[i].size();
		for (int j = 0; j < len; j++)
		{
			int next = a[i][j];
			if (visit[i] == visit[next])
				return false;
		}
	}
	return true;
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		for (int i = 0; i <= 20000; i++)
		{
			a[i].clear();
			visit[i] = 0;
		}
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++)
		{
			int n1, n2;
			scanf("%d %d", &n1, &n2);
			a[n1].push_back(n2);
			a[n2].push_back(n1);
		}
		for (int j = 1; j <= n; j++)
		{
			if (visit[j] == 0)
				bfs(j, 1);
		}
		if (isBigraph())
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}

