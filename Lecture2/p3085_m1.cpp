#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check(vector<string> &a)
{
	int n = a.size();
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 1; j < n; j++)
		{
			if (a[i][j] == a[i][j - 1])
			{
				cnt++;
			}
			else
			{
				cnt = 1;
			}
			if (res < cnt) res = cnt;
		}
		cnt = 1;
		for (int j = 1; j < n; j++)
		{
			if (a[j][i] == a[j - 1][i])
			{
				cnt++;
			}
			else
			{
				cnt = 1;
			}
			if (res < cnt) res = cnt;
		}
	}
	return res;
}
int main()
{
	int n; cin >> n;
	vector<string> a(n);
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + 1 < n)
			{
				swap(a[i][j], a[i][j + 1]);
				int tmp = check(a);
				if (res < tmp) res = tmp;
				swap(a[i][j], a[i][j + 1]);
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (i + 1 < n)
			{
				swap(a[i + 1][j], a[i][j]);
				int tmp = check(a);
				if (res < tmp) res = tmp;
				swap(a[i + 1][j], a[i][j]);
			}
		}
	}
	cout<<res;
	return 0;
}