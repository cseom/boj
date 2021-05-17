
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

class Matrix
{
	long long matrix[2][2];
public:
	Matrix()
	{
		memset(matrix, 0, sizeof(matrix));
	}
	Matrix& operator*(Matrix& ref)
	{
		Matrix res;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 2; k++)
					res.matrix[i][j] += (matrix[i][k] * ref.matrix[k][j]) % MOD;
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
				matrix[i][j] = res.matrix[i][j];
		}
		return *this;
	}
	long long* operator[](int i)
	{
		return matrix[i];
	}
	long long answer(void)
	{
		return matrix[0][1];
	}
};

Matrix base;

Matrix pow(Matrix &a, long long b)
{
	if (b == 0)
		return base;
	if (b % 2 > 0)
		return (pow(a, b - 1) * a);
	Matrix half = pow(a, b / 2);
	return (half * half);
}

int main()
{
	Matrix fibo;


	long long n;
	cin >> n;
	fibo[0][0] = fibo[0][1] = fibo[1][0] = 1;
	for (int i = 0; i < 2; i++)
		base[i][i] = 1;
	Matrix res = pow(fibo, n);
	cout << res.answer() % MOD << '\n';
	return 0;
}
