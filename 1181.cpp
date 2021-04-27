#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(string& a, string& b)
{
	if (a.length() == b.length())
		return a < b;
	return (a.length() < b.length());
}

int main()
{
	int n;
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end(), compare);
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] != a[i + 1])
			cout << a[i] << '\n';
	}
	cout << a[n - 1];
	return 0;
}
