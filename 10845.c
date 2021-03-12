#include <iostream>
#include <cstring>
using namespace std;

class queue
{
	int start = 0;
	int end = 0;
	int q[10002];
public:
	void push(int x)
	{
		q[end++] = x;
	}
	int pop()
	{
		if (empty())
			return -1;
		start++;
		return (q[start - 1]);
	}
	int size()
	{
		if (end < start)
			return 0;
		return (end - start);
	}
	int empty()
	{
		if (end <= start)
			return 1;
		else
			return 0;
	}
	int front()
	{
		if (empty())
			return -1;
		else
			return q[start];
	}
	int back()
	{
		if (empty())
			return -1;
		else
			return q[end - 1];
	}
};

int main()
{
	int n;
	char c[100];
	queue qu;

	scanf("%d", &n);
	while (n--)
	{
		int k;
		scanf("%s", c);
		if (!strcmp(c, "push"))
		{
			scanf("%d", &k);
			qu.push(k);
		}
		else if (!strcmp(c, "pop"))
			printf("%d\n", qu.pop());
		else if (!strcmp(c, "size"))
			printf("%d\n", qu.size());
		else if (!strcmp(c, "empty"))
			printf("%d\n", qu.empty());
		else if (!strcmp(c, "front"))
			printf("%d\n", qu.front());
		else if (!strcmp(c, "back"))
			printf("%d\n", qu.back());

	}
	return (0);
}

