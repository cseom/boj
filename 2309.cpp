#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a(9);
	for (int i = 0; i < 9; i++)
		scanf("%d", &a[i]);
	sort(a.begin(), a.end());
	int sum = 0;
	for (int i = 0; i < 9; i++)
		sum += a[i];
	int c = 0, d = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - a[i] - a[j] == 100)
			{
				c = a[i];
				d = a[j];
				break;
			}
		}
		if (c != 0)
			break;
	}
	for (int i = 0; i < 9; i++)
	{
		if (a[i] == c || a[i] == d)
			continue;
		printf("%d\n", a[i]);
	}
}
