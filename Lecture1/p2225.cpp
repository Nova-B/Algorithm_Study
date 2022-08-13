#include <iostream>
using namespace std;

int a[201][201] = { 0 };

int main()
{
	a[0][0] = 1LL;
	long long mod = 1000000000;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				a[i][j] += a[i - 1][j - l];
				a[i][j] %= mod;
			}
		}
	}
	cout << a[k][n];
	return 0;
}