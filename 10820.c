#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	while (1)
	{
		int ans[4];
		int len;
		string str;
		getline(cin, str);
		for (int i = 0; i < 4; i++)
			ans[i] = 0;
		len = str.length();
		if (len == 0)
			break;
		for (int i = 0; i < len; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				ans[0]++;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				ans[1]++;
			else if (str[i] >= '0' && str[i] <= '9')
				ans[2]++;
			else if (str[i] == ' ')
				ans[3]++;
		}
		for (int i = 0; i < 4; i++)
			printf("%d ", ans[i]);
		printf("\n");
	}
}
