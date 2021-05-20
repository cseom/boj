#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 1000000; i++)
	{
		int seng = i;
		int k = seng;
		while (k)
		{
			seng += k % 10;
			k /= 10;
		}
		if (seng == n)
		{
			cout << i << '\n';
			return 0;
		}
	}
	cout << "0\n";
	return 0;
}

