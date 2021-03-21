#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

int main(void)
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		long long ans = 0;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				ans += gcd(a[i], a[j]);
			}
		}
		cout << ans << "\n";
		delete[] a;
	}
}
