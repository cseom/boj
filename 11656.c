#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int len = s.length();
	string *ans = new string[len + 1];
	for (int i = 0; i < len; i++)
		ans[i] = s.substr(i);
	sort(ans, ans + len);
	for (int i = 0; i < len; i++)
		cout << ans[i] << '\n';
}
