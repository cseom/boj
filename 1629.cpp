#include <iostream>
using namespace std;

long long A, B, C;

long long pow(long long a, long long b)
{
	if (b == 1)
		return a;
	long long temp = pow(a, b / 2);
	if (b % 2)
		return ((temp * temp) % C * a) % C;
	else
		return (temp * temp) % C;
}

int main()
{
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld\n", pow(A % C, B) % C);
	return 0;
}
