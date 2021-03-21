#include <iostream>
#include <algorithm>
using namespace std;

int cnt[3];

int main(void)
{
	int n;
	cin >> n;


	for (int i = 2; i <= n; i *= 2)
	{
		cnt[0] += n / i;
	}
	for (int i = 5; i <= n; i *= 5)
	{
		cnt[1] += n / i;
	}
	int ans = min(cnt[0], cnt[1]);
	cout << ans;
}

