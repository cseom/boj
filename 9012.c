#include <iostream>
#include <cstring>
using namespace std;

int	main(void)
{
	int n;

	scanf("%d", &n);
	while (n--)
	{
		int cnt = 0;
		char s[52];
		int	 ans = 0;
		scanf("%s", s);
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{

			if (cnt == 0 && s[i] == ')')
				ans = 1;
			if (s[i] == '(')
				cnt++;
			else if (s[i] == ')')
				cnt--;
		}
		if (cnt != 0)
			ans = 1;
		printf("%s\n", ans == 1 ? "NO" : "YES");
	} 
	return (0);
}
