#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string s;
	getline(cin, s);
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			s[i] += 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;
	}
	cout << s;
}
