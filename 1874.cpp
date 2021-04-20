#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	int k = 1;
	cin >> n;
	vector<int> a(n);
	stack<int> s;
	string ans = "";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (s.empty() || s.top() < a[i])
		{
			while (k <= a[i])
			{
				s.push(k++);
				ans += "+";
			}
		}
		if (s.top() == a[i])
		{
			s.pop();
			ans += "-";
		}
	}
	if (!s.empty())
		cout << "NO\n";
	else
	{
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}
	return 0;
}
