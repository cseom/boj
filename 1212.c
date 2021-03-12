#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	string bin1[9] = { "0","1","10","11", "100", "101", "110", "111" };
	string bin[9] = { "000","001","010","011", "100", "101", "110", "111" };
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		if (i == 0)
			cout << bin1[s[i] - '0'];
		else
			cout << bin[s[i] - '0'];
	}
}

