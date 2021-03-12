/*
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	string s;
	stack<char> head, tail;
	cin >> s;
	int n;
	cin >> n;
	int len = s.length();
	for (int i = 0; i < len; i++)
		head.push(s[i]);
	while (n--)
	{
		char c;
		cin >> c;
		if (c == 'L')
		{
			if (!head.empty())
			{
				tail.push(head.top());
				head.pop();
			}
		}
		else if (c == 'D')
		{
			if (!tail.empty())
			{
				head.push(tail.top());
				tail.pop();
			}
		}
		else if (c == 'B')
		{
			if (!head.empty())
				head.pop();
		}
		else if (c == 'P')
		{
			char a;
			cin >> a;
			head.push(a);
		}
	}
	while (!head.empty())
	{
		tail.push(head.top());
		head.pop();
	}
	string ans = "";
	while (!tail.empty())
	{
		ans += tail.top();
		tail.pop();
	}
	cout << ans;
}
*/

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void)
{
	string s;
	int n;

	cin >> s;
	cin >> n;
	list<char> editor(s.begin(), s.end());
	auto cursor = editor.end();
	while (n--)
	{
		char c;
		cin >> c;
		if (c == 'L')
		{
			if (cursor != editor.begin())
				cursor--;
		}
		else if (c == 'D')
		{
			if (cursor != editor.end())
				cursor++;
		}
		else if (c == 'B')
		{
			if (cursor != editor.begin())
			{
				cursor = editor.erase(--cursor);
			}
		}
		else if (c == 'P')
		{
			char a;
			cin >> a;
			editor.insert(cursor, a);
		}
	}
	for (auto& x : editor)
		cout << x;
}
