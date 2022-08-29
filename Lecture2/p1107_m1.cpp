#include <iostream>
#include <cmath>
using namespace std;
bool broken[10];
int Possible(int c)
{
	if (c == 0)
	{
		return broken[0] ? 0 : 1;
	}
	int len = 0;
	while (c > 0)
	{
		if (broken[c % 10]) return 0;
		len++;
		c /= 10;
	}
	return len;
}
int main()
{
	int cur = 100;
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		broken[tmp] = true;
	}
	int res = abs(n - 100);
	for (int i = 0; i <= 1000000; i++)
	{
		int c = i;
		int len = Possible(c);
		if (len > 0)
		{
			int press = abs(c - n);
			if (res > len + press)
			{
				res = len + press;
			}
		}
	}
	cout << res;
	return 0;
}