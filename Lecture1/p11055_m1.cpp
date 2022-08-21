#include <iostream>
using namespace std;
long long a[1001] = { 0 };
long long d[1001] = { 0 };
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = a[i];
	}
	long long res = d[1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + a[i])
			{
				d[i] = d[j] + a[i];
				res = max(res, d[i]);
			}
		}
	}
	cout << res;
	return 0;
}