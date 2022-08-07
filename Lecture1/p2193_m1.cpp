#include <iostream>
using namespace std;

int main()
{
	long long d[91][2] = { 0 };//행은 N자리, 열은 끝자리가 0인지 1인지
	int n;
	cin >> n;
	d[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			if (j == 0)
			{
				d[i][0] += d[i - 1][j];
				d[i][1] += d[i - 1][j];
			}
			else if (j == 1)
			{
				d[i][0] += d[i - 1][j];
			}
		}
	}
	long long res = d[n][0] + d[n][1];
	cout << res;
	return 0;
}