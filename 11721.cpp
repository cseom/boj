#include <stdio.h>

int	main(void)
{
	int t;
	int i = 0;
	char c[110];

	scanf("%s", c);
	while (c[i])
	{
		t = 10;
		while (c[i] && t--)
			printf("%c", c[i++]);
		printf("\n");
	}
	return (0);
}