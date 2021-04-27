#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(char& a, char& b)
{
	return (a > b);
}

int main()
{
	string n;
	cin >> n;
	sort(n.begin(), n.end(), compare);
	cout << n;
	return 0;
}
