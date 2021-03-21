#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000

long long d[5001];
char s[5001];
int	 arr[5001];

int	main(void)
{
	int len;
	scanf("%s", s);
	
	len = strlen(s);
	
	d[0] = 1;
	for (int i = 1; i <= len; i++)
		arr[i] = s[i - 1] - '0';
	for (int i = 1; i <= len; i++)
	{
		if (arr[i] != 0)
			d[i] = (d[i] + d[i - 1]) % MOD;
		int x = arr[i] + arr[i - 1] * 10;
		if (x >= 10 && x <= 26)
			d[i] = (d[i] + d[i - 2]) % MOD;
	} 
	printf("%lld", d[len] % MOD);
	return (0);
}
