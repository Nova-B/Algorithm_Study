#include <iostream>
using namespace std;

int a[1001][3];
int d[1001][3] = {0};

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		d[i][0] += min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] += min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] += min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}
	int res = min(d[n][0], d[n][1]);
	res = min(res, d[n][2]);
	cout << res;
	
	return 0;
}