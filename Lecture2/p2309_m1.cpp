#include <iostream>
using namespace std;
int main()
{
	int a[9];
	bool find = false;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	int id1 = -1;
	int id2 = -1;
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			int res = 0;
			for (int k = 0; k < 9; k++)
			{
				if (k == i || k == j) continue;
				res += a[k];
				if (res > 100) break;
				
			}
			if (res == 100)
			{
				id1 = i;
				id2 = j;
				find = true;
				break;
			}
		}
		if (find) break;
	}
	for (int i = 0; i < 9; i++)
	{
		if (i == id1 || i == id2) continue;
		cout << a[i] << '\n';
	}
	return 0;
}