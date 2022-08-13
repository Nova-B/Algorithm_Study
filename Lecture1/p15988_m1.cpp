#include <iostream>
using namespace std;

long long a[1000001] = { 0, 1, 2, 4 };

int main()
{
	long long mod = 1000000009;
	for (int i = 4; i <= 1000000; i++)
	{
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		a[i] %= mod;
	}
	long long t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << a[n] << '\n';
	}
}