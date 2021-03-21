#include <iostream>
#include <cstring>
char c[100001];

int main()
{
	int len;
	int cnt = 0;
	int ans = 0;
	scanf("%s", c);

	len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] == '(')
			cnt++;
		else if (c[i] == ')')
		{
			cnt--;
			if (i != 0 && c[i - 1] == ')')
				ans++;
			else
				ans += cnt;
		}
	}
	printf("%d", ans);
	return (0);
}
