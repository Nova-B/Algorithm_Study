#include <iostream>
using namespace std;
int a[100001] = { 0 };
long long d[100001] = { 0 };
long long d1[100001] = { 0 };
long long sum[100001] = { 0 };
int main()
{
	bool minusStart = false;
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d1[i] = a[i];
	}
	d[1] = a[1];
	d1[n] = a[n];
	long long res = a[1];
	for (int i = 2; i <= n; i++)
	{
		if (a[i] > d[i - 1] + a[i])
		{
			d[i] = a[i];
		}
		else
		{
			d[i] = d[i - 1] + a[i];
		}
		res = max(res, d[i]);
		sum[i] += d[i - 1];
	}
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i] > d1[i + 1] + a[i])
		{
			d1[i] = a[i];
		}
		else
		{
			d1[i] = d1[i + 1] + a[i];
		}
		sum[i] += d1[i + 1];
		res = max(res, sum[i]);
	}
	cout << res;
	return 0;
}