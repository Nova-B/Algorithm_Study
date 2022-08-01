#include <iostream>
using namespace std;

int main()
{
	int d[1001] = { 0, };
	d[1] = 1;
	d[2] = 3;
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		d[i] = ((d[i - 1] % 10007) + ((d[i - 2] * 2) % 10007)) % 10007;
	}
	cout << d[n];

	return 0;
}