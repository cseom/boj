#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void sol(int n, int k, int cnt, bool check[10], vector<int> &ans)
{
	if (cnt == k)
	{
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << ' ';
		cout << '\n';
		return ;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!ans.empty() && ans.back() > i)
			continue;
		check[i] = true;
		ans.push_back(i);
		sol(n, k, cnt + 1, check, ans);
		check[i] = false;
		ans.pop_back();
	}
}

int main()
{
	int n, m;
	bool check[10];
	vector<int> ans;

	cin >> n >> m;
	memset(check, false, sizeof(check));
	sol(n, m, 0, check, ans);
	return (0);
}
