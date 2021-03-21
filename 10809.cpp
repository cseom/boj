#include <iostream>
#include <cstring>
using namespace std;



int main(void)
{
	char str[110];
	int ans[26];
	int len;
	scanf("%s", str);

	for (int i = 0; i < 26; i++)
		ans[i] = -1;

	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (ans[str[i] - 'a'] == -1)
			ans[str[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", ans[i]);
}
