#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

int main(void)
{
	long long n1, n2;
	cin >> n1 >> n2;
	long long result = gcd(n1, n2);
	for (long long i = 0; i < result; i++)
		cout << 1;
}

