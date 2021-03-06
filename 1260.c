#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int a[1001][1001];
bool visit[1001];

void dfs(int v)
{
	printf("%d ", v);
	visit[v] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 1 || a[v][i] == 0)
			continue;
		dfs(i);
	}
}

void bfs(int v)
{
	queue<int> q;
	q.push(v);
	visit[v] = 0;
	while (!q.empty())
	{
		v = q.front();
		printf("%d ", q.front());
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (visit[i] == 0 || a[v][i] == 0)
				continue;
			q.push(i);
			visit[i] = 0;
		}
	}
}

int main(void)
{
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		a[n1][n2] = 1;
		a[n2][n1] = 1;
	}
	dfs(v);
	printf("\n");
	bfs(v);
}

