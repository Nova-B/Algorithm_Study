#include <iostream>
using namespace std;
int LCM(int a, int b)
{
	int x = a;
	int y = b;
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	int lcm = ( x * y ) / a;
	return lcm;
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int m, n, x, y; cin >> m >> n >> x >> y;
		//최소공배수 구하고 그 이상으로 넘어갈 때까지 안나오면 -1
		int lcm = LCM(m, n);
		int x1 = 0, y1 = 0;
		for (int i = 1; i <= lcm; i++)
		{
			x1 = i % m;
			if (x1 == 0) x1 = m;
			y1 = i % n;
			if (y1 == 0) y1 = n;
			if (x == x1 && y == y1)
			{
				cout << i << '\n'; break;
			}
			if (i == lcm) {
				cout << -1 << '\n';
			}
		}

	}
	return 0;
}