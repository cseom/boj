#include <stdio.h>

int	main(void)
{
	int t;
	int res = 0;
	char c[110];

	scanf("%d", &t);
	scanf("%s", c);
	for (int i = 0; i < t; i++)
		res += c[i] - '0';
	printf("%d", res);
	return (0);
}