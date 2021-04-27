#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long long ans = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				long long sum = a[i] + a[j] + a[k];
				if (sum > ans&& sum <= m)
					ans = sum;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
