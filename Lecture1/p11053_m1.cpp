#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 1;
	int d[1000] = {0};
	int res[1000] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
		res[i] = 1;
	}
	if (n == 1) { cout << 1; return 0; }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (d[j] < d[i] && res[i] < res[j] + 1)
			{
				res[i] = res[j] + 1;
				cnt = max(cnt, res[i]);
			}
		}
	}
	cout << cnt;
	return 0;
}