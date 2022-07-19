//½ÇÆÐ
#include <iostream>
using namespace std;

int n;

bool isPrime(int x)
{
	if (x < 2) return false;
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0) return false;
	}
	return true;
}

int main()
{
	while (1)
	{
		cin >> n;
		if (n == 0) return 0;

		for (int i = 2; i <= n; i++)
		{
			if (isPrime(i) && isPrime(n - i))
			{
				cout << n << " = " << i << " + " << n - i << '\n';
				break;
			}
			if (i == n / 2) {
				cout << "Goldbach's conjecture is wrong.\n";
				break;
			}
		}
	}
	return 0;
}