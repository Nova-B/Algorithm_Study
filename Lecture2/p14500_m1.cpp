#include <iostream>
using namespace std;
int a[500][500] = { 0 };
int main()
{
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//1�����
			if (j + 3 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i][j + 3];
				res = max(res, sum);
			}
			if (i + 3 < n)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 3][j];
				res = max(res, sum);
			}

			//2�� ��� �簢��
			if (i + 1 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
				res = max(res, sum);
			}

			//3�� ���
			if (i + 2 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 2][j + 1];
				res = max(res, sum);
			}

			if (i + 2 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 2][j];
				res = max(res, sum);
			}

			if (i + 2 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i + 1][j + 1] + a[i + 2][j + 1];
				res = max(res, sum);
			}

			if (i + 2 < n && j - 1 >= 0)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 2][j - 1];
				res = max(res, sum);
			}

			if (i + 1 < n && j + 2 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i][j + 2];
				res = max(res, sum);
			}

			if (i + 1 < n && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 2];
				res = max(res, sum);
			}

			if (i - 1 >= 0 && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i - 1][j + 2];
				res = max(res, sum);
			}

			if (i + 1 < n && j + 2 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i + 1][j + 2];
				res = max(res, sum);
			}
			
			//4�����
			if (i - 1 >= 0 && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i - 1][j + 1] + a[i - 1][j + 2];
				res = max(res, sum);
			}
			
			if (i + 1 < n && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i + 1][j + 1] + a[i + 1][j + 2];
				res = max(res, sum);
			}

			if (i + 2 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i + 2][j + 1];
				res = max(res, sum);
			}

			if (i + 2 < n && j - 1 >= 0)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 1][j - 1] + a[i + 2][j - 1];
				res = max(res, sum);
			}

			//5�� ���
			if (i + 1 < n && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i + 1][j + 1] + a[i][j + 2];
				res = max(res, sum);
			}

			if (i - 1 >= 0 && j + 2 < m)
			{
				int sum = a[i][j] + a[i][j + 1] + a[i - 1][j + 1] + a[i][j + 2];
				res = max(res, sum);
			}

			if (i + 2 < n && j + 1 < m)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i + 2][j];
				res = max(res, sum);
			}

			if (i + 2 < n && j - 1 >= 0)
			{
				int sum = a[i][j] + a[i + 1][j] + a[i + 1][j - 1] + a[i + 2][j];
				res = max(res, sum);
			}
		}
	}
	cout << res;
	return 0;
}