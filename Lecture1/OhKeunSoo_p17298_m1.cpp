#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	stack<int> s;
	s.push(arr[n - 1]);
	for (int i = n - 2; i >= 0; i--)
	{
		if (arr[i] < s.top())
		{
			int tmp = s.top();
			s.push(arr[i]);
			arr[i] = tmp;
		}
		else
		{
			while (1)
			{
				s.pop();
				if (s.empty())
				{
					s.push(arr[i]);
					arr[i] = -1;
					break;
				}

				if (arr[i] < s.top())
				{
					int tmp = s.top();
					s.push(arr[i]);
					arr[i] = tmp;
					break;
				}
			}
		}
	}
	arr[n - 1] = -1;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}


	delete[] arr;
	return 0;
}