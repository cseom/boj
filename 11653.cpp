#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector<int> v;

	int i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			v.push_back(i);
			n /= i;
		}
		else
			i++;
	}
	int len = v.size();
	for (int i = 0; i < len; i++)
		cout << v[i] << "\n";
}

