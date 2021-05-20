#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(int left, int right, vector<long long> &h)
{
	if (left == right)
		return h[left];
	long long mid = (left + right) / 2;
	long long ret = max(solve(left, mid, h), solve(mid + 1, right, h));
	long long lo = mid;
	long long hi = mid + 1;
	long long height = min(h[mid], h[hi]);

	ret = max(ret, height * 2);
	while (left < lo || hi < right)
	{
		if (hi < right && (lo == left || h[lo - 1] < h[hi + 1]))
		{
			++hi;
			height = min(height, h[hi]);
		}
		else
		{
			--lo;
			height = min(height, h[lo]);
		}
		ret = max(ret, height * (hi - lo + 1));
	}
	return ret;
}

int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		vector<long long> h(n, 0);
		for (int i = 0; i < n; i++)
			cin >> h[i];
		cout << solve(0, h.size() - 1, h) << '\n';
	}
	return 0;
}
