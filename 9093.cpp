#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		int i = 0;
		getline(cin, s);
		stack<char> word;
		while (s[i])
		{
			if (s[i] == ' ')
			{
				while (!word.empty())
				{
					cout << word.top();
					word.pop();
				}
				cout << ' ';
			}
			else
				word.push(s[i]);
			i++;
		}
		while (!word.empty())
		{
			cout << word.top();
			word.pop();
		}
		cout << '\n';
	}
	return 0;
}
