#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int m, n;
int a[101][101];
int visit[101][101];
int dx[8] = { 0, 0,-1,1 };
int dy[8] = { -1,1,0,0 };

void dfs(int x, int y, int cnt)
{
	visit[x][y] = 1;
	a[x][y] = cnt;
	for (int i = 0; i < 4; i++)
	{
		int sx = x + dx[i];
		int sy = y + dy[i];
		if (sx >= 0 && sx < n && sy >= 0 && sy < n)
		{
			if (a[sx][sy] == 1 && visit[sx][sy] == 0)
				dfs(sx, sy, cnt);
		}
	}
}

int bfs(int cnt)
{
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == cnt)
			{
				visit[i][j] = 1;
				q.push(make_pair(i, j));
			}
		}
	}
	int result = 0;
	while (!q.empty())
	{
		int cur = q.size();
		for (int i = 0; i < cur; i++)
		{
			pair<int, int> now = q.front();
			q.pop();
			for (int i = 0; i < 4; i++)
			{
				int sx = now.first + dx[i];
				int sy = now.second + dy[i];
				if (sx >= 0 && sx < n && sy >= 0 && sy < n)
				{
					if (a[sx][sy] != 0 && a[sx][sy] != cnt)
					{
						return result;
					}
					else if (a[sx][sy] == 0 && visit[sx][sy] == 0)
					{
						q.push(make_pair(sx, sy));
						visit[sx][sy] = 1;
					}
				}
			}
		}
		result++;
	}
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 1 && visit[i][j] == 0)
				dfs(i, j, cnt++);
		}
	}
	int ans = 987654321;
	for (int i = 1; i < cnt; i++)
	{
		memset(visit, 0, sizeof(visit));
		ans = min(ans, bfs(i));
	}
	printf("%d\n", ans);
}
