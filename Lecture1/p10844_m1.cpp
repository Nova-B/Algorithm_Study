#include <iostream>
using namespace std;

int main()
{
	long long d[101][10] = { 0 }; //행은 자리길이, 열은 맨 뒤자리 수
	long long mod = 1000000000;
	for (int i = 1; i <= 9; i++) { d[1][i] = 1; }
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j > 0) { d[i][j] += d[i - 1][j - 1]; }
			if (j < 9) { d[i][j] += d[i - 1][j + 1]; }
			d[i][j] %= mod;
		}
	}
	long long res = 0;
	for (int i = 0; i <= 9; i++) { res += d[n][i]; }
	res %= mod;
	cout << res;
	return 0;
}