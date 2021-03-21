#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n;
int a[1001][1001];
int visit[1001][1001];
int mx[8] = { 0, 0,-1,1 };
int my[8] = { -1,1,0,0 };

void bfs(queue <pair<int, int>> q)
{
	int day = 0;
	while (!q.empty())
	{
		pair<int, int> now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int sx = now.first + mx[i];
			int sy = now.second + my[i];
			if (sx >= 0 && sx < n && sy >= 0 && sy < m)
			{
				if (a[sx][sy] == 0 && visit[sx][sy] == 0)
				{
					q.push(make_pair(sx, sy));
					visit[sx][sy] = visit[now.first][now.second] + 1;
				}
			}
		}
	}
}

int main()
{

	queue<pair<int, int>> q;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j] == 1)
			{
				visit[i][j] = 1;
				q.push(make_pair(i, j));
			}
			if (a[i][j] == -1)
				visit[i][j] = -1;
		}
	}
	bfs(q);
	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (visit[i][j] > ans)
			{
				ans = visit[i][j];
			}
			if (visit[i][j] == 0)
			{
				ans = 0;
				break;
			}
		}
		if (ans == 0)
			break;
	}
	printf("%d\n", ans - 1);
}
