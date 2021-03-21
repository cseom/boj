#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s[4];
	for (int i = 0; i < 4; i++)
		cin >> s[i];
	long long a = stoll(s[0] + s[1]);
	long long b = stoll(s[2] + s[3]);
	cout << a + b;
}
