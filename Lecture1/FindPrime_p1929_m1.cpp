#include <iostream>
using namespace std;

bool check[1000001];

int main()
{
	int m, n;
	cin >> m >> n;
	int* prime = new int[n - m + 1];
	int pn = 0;

	check[0] = false;
	for (int i = 2; i <= n; i++)
	{
		if (check[i] == false)
		{
			if (i >= m) cout << i << '\n';
			for (int j = i * 2; j <= n; j += i)
			{
				check[j] = true;
			}
		}
	}
	delete[] prime;
	return 0;
}