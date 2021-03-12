#include <iostream>
using namespace std;

bool prime[1001];

int main(void)
{
	prime[1] = true;
	for (int i = 2; i <= 1000; i++)
	{
		if (!prime[i])
		{
			for (int j = i * 2; j <= 1000; j+=i)
			{
				prime[j] = true;
			}
		}
	}
	int n;
	int cnt = 0;
	int num[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < n; i++)
	{
		if (!prime[num[i]])
			cnt++;
	}
	cout << cnt;
}

