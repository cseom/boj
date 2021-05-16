#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cin >> m >> k;
	vector<vector<int>> b(m, vector<int>(k));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
			cin >> b[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < k; l++)
		{
			int res = 0;
			for (int j = 0; j < m; j++)
			{
				res += a[i][j] * b[j][l];
			}
			cout << res << ' ';
		}
		cout << '\n';
	}
	return 0;
}
