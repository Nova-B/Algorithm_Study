#include <iostream>
using namespace std;
int a[1000] = { 0 };//수열
int p[1000] = { 0 };//앞에서 증가하는 부분수열 개수
int m[1000] = { 0 };//뒤로 감소하는 부분수열 개수
int sum[1000] = { 0 };//p + m - 1
int main()
{
	int n; cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		p[i] = 1;
		m[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i] && p[i] < p[j] + 1)
			{
				p[i] = p[j] + 1;
			}
		}
		sum[i] += p[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i] && m[i] < m[j] + 1)
			{
				m[i] = m[j] + 1;
			}
		}
		sum[i] += m[i];
		res = max(res, sum[i] - 1);
	}
	cout << res;
	return 0;
}