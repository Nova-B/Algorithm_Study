#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int n, m;
	int arr[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n, compare);

	int result = 0;
	int sum = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			sum = arr[i] + arr[j];
			if (sum >= m)
			{
				continue;
			}

			for (int k = j + 1; k < n; k++)
			{
				int sum2 = sum + arr[k];
				if (sum2 == m)
				{
					cout << m;
					return 0;
				}
				else if (sum2 < m)
				{
					result = max(result, sum2);
				}

			}
		}
	}
	cout << result;
	
	return 0;
}