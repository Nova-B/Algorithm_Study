#include <iostream>
#include <cmath>
using namespace std;

int a[1000001] = {0};

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
		for (int j = 1; j * j <= i; j++)
		{
			if (a[i] > a[i - j * j] + 1)
			{
				a[i] = a[i - j * j] + 1;
			}
		}
	}
	cout << a[n];
	return 0;
}