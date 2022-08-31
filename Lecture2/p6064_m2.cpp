#include <iostream>
using namespace std;
int LCD(int a, int b)
{
	int x = a;
	int y = b;
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	int lcd = (x * y) / a;
	return lcd;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int m, n, x, y; cin >> m >> n >> x >> y;
		int lcd = LCD(m, n);
		int y1 = x - m;
		for (int i = x; i <= lcd; i += m)
		{
			y1 += m;
			y1 %= n;
			if (y1 == 0) y1 = n;
			if (y == y1)
			{
				cout << i << '\n';
				break;
			}
			if (i + m > lcd) { cout << -1 << '\n'; }
		}
	}
	return 0;
}