#include <iostream>
using namespace std;

int main(void)
{
	bool* prime = new bool[1000001];
	for (int i = 0; i <= 1000000; i++)
		prime[i] = true;
	prime[1] = false;
	for (int i = 2; i <= 1000; i++)
	{
		if (prime[i])
		{
			for (int j = i + i; j <= 1000000; j+=i)
			{
				prime[j] = false;
			}
		}
	}
	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		int i = 3;
		while (1)
		{
			if (n - i < 0)
			{
				printf("Goldbach's conjecture is wrong.\n");
				break;
			}
			if (prime[i] == true && prime[n - i] == true)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				break;
			}
			i++;
		}
	}
}

