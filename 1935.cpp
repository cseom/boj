#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	string str;
	cin >> n;
	vector<double> a(n);
	stack<double> s;
	cin >> str;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			s.push(a[str[i] - 'A']);
		else
		{
			double num1 = s.top();
			s.pop();
			double num2 = s.top();
			s.pop();
			if (str[i] == '+')
				s.push(num1 + num2);
			else if (str[i] == '-')
				s.push(num2 - num1);
			else if (str[i] == '*')
				s.push(num1 * num2);
			else if (str[i] == '/')
				s.push(num2 / num1);
		}
	}
	printf("%.2f", s.top());
	return 0;
}
