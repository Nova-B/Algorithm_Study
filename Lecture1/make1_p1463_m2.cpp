#include <iostream>
using namespace std;

int d[1000000];

int MakeONe(int n)
{
	if (n == 1) return 0;
	if (d[n] > 0) return d[n];
	d[n] = MakeONe(n - 1) + 1;
	if (n % 2 == 0)
	{
		int tmp = MakeONe(n / 2) + 1;
		if (d[n] > tmp)
		{
			d[n] = tmp;
		}
	}
	if (n % 3 == 0)
	{
		int tmp = MakeONe(n / 3) + 1;
		if (d[n] > tmp)
		{
			d[n] = tmp;
		}
	}
	return d[n];
}

int main()
{
	d[1] = 0;
	int n;
	cin >> n;
	
	cout << MakeONe(n);
	return 0;
}