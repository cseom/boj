#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	return gcd(n2, n1 % n2);
}

int main(void)
{
	int n1, n2;
	int gcdn;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n1 >> n2;
		gcdn = gcd(n1, n2);
		cout << (n1 * n2) / gcdn << "\n";
	}
}

