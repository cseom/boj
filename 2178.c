#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n;
int a[101][101];
int visit[101][101];
int mx[8] = { 0, 0,-1,1 };
int my[8] = { -1,1,0,0 };

void bfs(queue <pair<int, int>> q)
{
	while (!q.empty())
	{
		pair<int, int> now = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int sx = now.first + mx[i];
			int sy = now.second + my[i];
			if (sx >= 0 && sx < m && sy >= 0 && sy < n)
			{
				if (a[sx][sy] == 1 && visit[sx][sy] == 0)
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	q.push(make_pair(0, 0));
	visit[0][0] = 1;
	bfs(q);
	printf("%d\n", visit[m - 1][n - 1]);
}
