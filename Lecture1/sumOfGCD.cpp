#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio;
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int gcd = 0;
		long long result = 0;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int a = arr[i];
				int b = arr[j];
				while (1)
				{
					if (b == 0)
					{
						gcd = a;
						break;
					}
					int tmp = a % b;
					a = b;
					b = tmp;
				}
				result += gcd;
			}
		}
		cout << result << '\n';

		delete[] arr;
	}

	return 0;
}