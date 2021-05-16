
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> SquareMatrix;

SquareMatrix operator* (const SquareMatrix& a, const SquareMatrix& b)
{
	int n = a.size();
	SquareMatrix res(n, vector<long long>(n));

	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < n; l++)
		{
			for (int j = 0; j < n; j++)
				res[i][l] += (a[i][j] * b[j][l]);
			res[i][l] %= 1000;
		}
	}
	return res;
}

SquareMatrix identity(int n)
{
	SquareMatrix one(n, vector<long long>(n));
	for (int i = 0; i < n; i++)
	{
		one[i][i] = 1;
	}
	return one;
}

SquareMatrix pow(SquareMatrix& A, long long m)
{
	if (m == 0)
		return identity(A.size());
	if (m % 2 > 0)
		return  pow(A, m - 1) * A;
	SquareMatrix half = pow(A, m / 2);
	return half * half;
}

int main()
{
	int n;
	long long b;

	cin >> n >> b;
	SquareMatrix A(n, vector<long long>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
	}
	A = pow(A, b);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << A[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
