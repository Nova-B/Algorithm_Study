#include <iostream>
using namespace std;
int a[1001] = { 0 };
int d[1001] = { 0 };
int main()
{
	int n; cin >> n;
	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = 1;
	}
	for (int i = n; i > 0; i--)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + 1)
			{
				d[i] = d[j] + 1;
				res = max(res, d[i]);
			}
		}
	}
	cout << res;
	return 0;
}