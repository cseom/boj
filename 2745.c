#include <iostream>
#include <string>
using namespace std;

int power(int i, int j)
{
	if (j == 0)
		return 1;
	j -= 1;
	int num = i;
	while (j--)
		i *= num;
	return i;
}

int main(void)
{
	string n;
	int b, cnt = 0;
	int ans = 0;
	const char str[38] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> n >> b;
	int len = n.length();
	while (cnt < len)
	{
		int num = 0;
		for (int i = 0; i < b; i++)
		{
			if (str[i] == n[len - cnt - 1])
				num = i;
		}
		ans += (power(b, cnt) * num);
		cnt++;
	}
	cout << ans;
}
