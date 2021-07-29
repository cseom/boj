#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int k;
	stack<int> s;

	cin >> k;
	while (k--)
	{
		int x;
		cin >> x;
		if (x == 0)
			s.pop();
		else
			s.push(x);
	}
	long long ans = 0;
	while (!s.empty())
	{
		ans += s.top();
		s.pop();
	}
	cout << ans << '\n';
}
