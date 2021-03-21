#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[52][52];
int visit[52][52];
int x[8] = { 0, 0,-1,1,-1,-1,1,1 };
int y[8] = { -1,1,0,0,-1,1,-1,1 };

void dfs(int cx, int cy)
{

	if (visit[cx][cy] > 0)
		return;
	visit[cx][cy] = 1;
	for (int i = 0; i < 8; i++)
	{
		int sx = cx + x[i];
		int sy = cy + y[i];
		if (a[sx][sy] == 1 && visit[sx][sy] == 0)
		{
			dfs(sx, sy);
		}
	}
}

int main()
{

	while (1)
	{
		int w, h;
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i <= 50; i++)
		{
			for (int j = 0; j <= 50; j++)
			{
				a[i][j] = 0;
				visit[i][j] = 0;
			}
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
				scanf("%1d", &a[i][j]);
		}
		int k = 0;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (!visit[i][j] && a[i][j] == 1)
				{
					k += 1;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", k);
	}
}
