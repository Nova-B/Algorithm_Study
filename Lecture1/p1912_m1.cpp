#include <iostream>
using namespace std;

int a[100000];
int a[100000];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	a[0] = a[0];
	int res = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] + a[i] < a[i])
		{
			a[i] = a[i];
		}
		else
		{
			a[i] = a[i - 1] + a[i];
		}
		res = max(res, a[i]);
	}
	cout << res;
	return 0;
}