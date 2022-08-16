#include <iostream>
using namespace std;

int d[1001][10] = { 0 };

int main()
{
	int n;
	d[0][9] = 1;
	int mod = 10007;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = j; k <= 9; k++)
			{
				d[i][j] += (d[i - 1][k]) % mod;
			}
		}
	}
	int res = 0;
	for (int j = 0; j <= 9; j++)
	{
		res += d[n][j];
	}
	cout << (res) % mod;
	return 0;
}