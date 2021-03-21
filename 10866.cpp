#include <iostream>
#include <string>
#include  <vector>
using namespace std;

class Deque
{
public:
	int len;
	vector<int> d;
	Deque()
	{
		len = 0;
	}
	void push_front(int n)
	{
		if (len != 0)
		{
			d.push_back(d[len - 1]);
			for (int i = d.size() - 1; i > 0; i--)
				d[i] = d[i - 1];
			d[0] = n;
		}
		else
			d.push_back(n);
		len++;
	}
	void push_back(int n)
	{
		d.push_back(n);
		len++;
	}
	int pop_back()
	{
		if (len != 0)
		{
			int a = d[len - 1];
			d.pop_back();
			len--;
			return a;
		}
		else
			return -1;
	}
	int pop_front()
	{
		if (len != 0)
		{
			int a = d[0];
			int k = d.size() - 1;
			for (int i = 0; i < k; i++)
				d[i] = d[i + 1];
			d.pop_back();
			len--;
			return a;
		}
		else
			return -1;
	}
	int size()
	{
		return len;
	}
	int empty()
	{
		if (len == 0)
			return 1;
		else
			return 0;
	}
	int front()
	{
		if (len != 0)
			return d[0];
		else
			return -1;
	}
	int back()
	{
		if (len != 0)
			return d[len - 1];
		else
			return -1;
	}
};

int main()
{
	int t;
	cin >> t;
	Deque q;
	while (t--)
	{
		string s;
		cin >> s;
		if (!s.compare("push_front"))
		{
			int n;
			cin >> n;
			q.push_front(n);
		}
		else if (!s.compare("push_back"))
		{
			int n;
			cin >> n;
			q.push_back(n);
		}
		else if (!s.compare("pop_front"))
			cout << q.pop_front() << "\n";
		else if (!s.compare("pop_back"))
			cout << q.pop_back() << "\n";
		else if (!s.compare("size"))
			cout << q.size() << "\n";
		else if (!s.compare("empty"))
			cout << q.empty() << "\n";
		else if (!s.compare("front"))
			cout << q.front() << "\n";
		else if (!s.compare("back"))
			cout << q.back() << "\n";
	}
	return 0;
}
