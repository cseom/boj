#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int ans;


void dfs(int here)
{
	visited[here] = true;
	for (int i = 0; i < adj[here].size(); i++)
	{
		if (adj[here][i] && !visited[i])
		{
			ans += 1;
			dfs(i);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	visited = vector<bool>(n + 1, false);
	adj = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}
	dfs(1);
	cout << ans << '\n';

	return 0;
}
