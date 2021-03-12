#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int ans = 1;
	while (n)
	{
		ans *= n;
		n--;
	}
	cout << ans;
}

