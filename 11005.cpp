#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, b, cnt = 0;
	const char str[38] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> n >> b;

	vector<char> v;
	while (n != 0)
	{
		v.push_back(str[n % b]);
		n /= b;
		cnt++;
	}
	for (int i = cnt -1; i >= 0; i--)
		cout << v[i];
}
