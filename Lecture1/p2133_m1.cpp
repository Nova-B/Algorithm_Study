//2의 배수만 된다는 판단
#include <iostream>
using namespace std;
int a[31] = { 0, 0, 3 };
int d[31] = { 0, 0, 3 };
int main()
{
	int n; cin >> n;
	for (int i = 4; i < 31; i += 2)
	{
		a[i] = 2;
	}
	for (int i = 4; i < 31; i += 2)
	{
		for (int j = 2; i - j > 0; j += 2)
		{
			d[i] += d[i - j] * a[j];
		}
		d[i] += 2;
	}
	cout << d[n];
	return 0;
}