
#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

long long pow(long long a, long long b)
{
	if (b == 0)
		return 1;
	if (b % 2 > 0)
		return (pow(a, b - 1) * a) % MOD;
	long long half = pow(a, b / 2) % MOD;
	return (half * half) % MOD;
}

int main()
{
	int n, k;
	cin >> n >> k;
	long long A = 1, B = 1;
	for (long long i = 1; i <= n; i++)
	{
		A *= i;
		A %= MOD;
	}
	for (long long i = 1; i <= k; i++)
	{
		B *= i;
		B %= MOD;
	}
	for (long long i = 1; i <= n - k; i++)
	{
		B *= i;
		B %= MOD;
	}
	long long B2 = pow(B, MOD - 2);
	long long ans = A * B2;
	ans %= MOD;
	cout << ans << '\n';
	return 0;
}
