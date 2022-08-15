#include <iostream>
using namespace std;

int d[100001][3] = { 0, 0, 0, 1, 1, 1 };

int main()
{
	int n;
	int mod = 9901;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][2]) % mod;
		d[i][1] = (d[i - 1][0] + d[i - 1][2]) % mod;
		d[i][2] = (d[i - 1][0] + d[i - 1][1]) % mod;
	}
	int res = (d[n][0] + d[n][1] + d[n][2]) % mod;
	cout << res;
	return 0;
}