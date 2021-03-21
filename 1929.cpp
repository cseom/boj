#include <iostream>
using namespace std;

int main(void)
{
	bool* prime = new bool[1000001];
	for (int i = 0; i <= 1000000; i++)
		prime[i] = false;
	prime[1] = true;
	for (int i = 2; i <= 1000000; i++)
	{
		if (!prime[i])
		{
			for (int j = i * 2; j <= 1000000; j+=i)
			{
				prime[j] = true;
			}
		}
	}
	int n, m;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		if (!prime[i])
			cout << i << "\n";
	}
	delete[] prime;
}

