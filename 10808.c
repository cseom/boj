#include <iostream>
#include <cstring>
using namespace std;

int ans[26];

int main(void)
{
	char str[110];

	int len;
	scanf("%s", str);

	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		ans[str[i] - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", ans[i]);
}
