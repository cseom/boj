#include <stdio.h>

int	main(void)
{
	int a, b, c, t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %c %d", &a, &c, &b);
		printf("%d\n", a + b);
	}
	return (0);
}