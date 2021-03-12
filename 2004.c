#include <iostream>
#include <algorithm>
using namespace std;

pair<long long, long long> zero(long long n)
{
	long long t = 0, f = 0, i = 0;
	for (i = 2; i <= n; i *= 2)
		t += n / i;
	for (i = 5; i <= n; i *= 5)
		f += n / i;
	return (pair<long long, long long> (t, f));
}

int main(void)
{
	int n, m;
	cin >> n >> m;
	pair<long long, long long> ansn, ansm, ansnm;

	ansn = zero(n);
	ansm = zero(m);
	ansnm = zero(n-m);
	long long t, f;

	t = ansn.first - ansm.first - ansnm.first;
	f = ansn.second - ansm.second - ansnm.second;

	cout << min(t, f);
	return 0;
}

