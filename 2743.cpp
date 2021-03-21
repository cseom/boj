#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	char a[110];
	int i = 0;
	scanf("%s", &a);
	while (a[i])
	{
		i++;
	}
	printf("%d\n", i);
}
