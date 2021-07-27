#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

int max_ans, min_ans;

int	calc(int a, int b, char oper)
{
	int ans;

	switch(oper)
	{
	case '+': ans = a + b; break;
	case '-': ans = a - b; break;
	case '*': ans = a * b; break;
	case '/': ans = a / b; break;
	default:break;
	}
	return ans;
}

void sol(int plus, int minus, int mul, int mod, vector<int> &poper, string oper)
{
	if (plus == 0 && minus == 0 && mul == 0 && mod == 0)
	{
		int temp;
		temp = calc(poper[0], poper[1], oper[0]);
		for (int i = 1; i < oper.length(); i++)
		{
			temp = calc(temp, poper[i + 1], oper[i]);
		}
		if (temp > max_ans)
			max_ans = temp;
		if (temp < min_ans)
			min_ans = temp;
		return;
	}
	if (plus > 0)
		sol(plus - 1, minus, mul, mod, poper, oper + "+");
	if (minus > 0)
		sol(plus, minus - 1, mul, mod, poper, oper + "-");
	if (mul > 0)
		sol(plus, minus, mul - 1, mod, poper, oper + "*");
	if (mod > 0)
		sol(plus, minus, mul, mod - 1, poper, oper + "/");
}

int main()
{
	int n;
	int plus, minus, mul, mod;
	vector<int> poper;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		poper.push_back(x);
	}
	cin >> plus >> minus >> mul >> mod;
	max_ans = -1000000000;
	min_ans = 1000000000;
	sol(plus, minus, mul, mod, poper, "");
	cout << max_ans << '\n' << min_ans << '\n';
	return (0);
}
