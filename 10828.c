#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class stack
{
	int s[10001];
	int index = 0;
public:
	void push(int x)
	{
		s[index++] = x;
	}
	int pop()
	{
		if (index == 0)
			return -1;
		return s[--index];
	}
	int size()
	{
		return (index);
	}
	int empty()
	{
		if (index == 0)
			return true;
		else
			return false;
	}
	int top()
	{
		if (index == 0)
			return (-1);
		else
			return (s[index - 1]);
	}
};

int	main(void)
{
	int n;
	string s;
	stack stk;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		cin >> s;
		if (!s.compare("push"))
		{
			int k;
			cin >> k;
			stk.push(k);
		}
		else if (!s.compare("pop"))
			cout << stk.pop() << "\n";
		else if (!s.compare("size"))
			cout << stk.size() << "\n";
		else if (!s.compare("empty"))
			cout << stk.empty() << "\n";
		else if (!s.compare("top"))
			cout << stk.top() << "\n";
	}
	return (0);
}
