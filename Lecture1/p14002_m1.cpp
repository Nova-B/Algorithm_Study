#include <iostream>
using namespace std;

int a[1001] = { 0 };//����a
int v[1001] = { 0 };//�� �ٲ�� �Ǿ������� ����ϴ� ����
int a[1001] = { 0 };//���� �κ� ���� ���� ���� ����
void result(int n)
{
	if (n == 0) { return; }
	result(v[n]);
	cout << a[n] << ' ';
}

int main()
{
	int n;
	int cnt = 1;
	int maxIndex = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] = 1;
	}
	if (n == 1) { cout << 1 << '\n' << a[1]; return 0; }
	if (n == 2 && a[1] > a[2]) { cout << 1 << '\n' << a[1]; return 0; }

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i] && a[i] < a[j] + 1)
			{
				a[i] = a[j] + 1;
				v[i] = j;
				if (cnt < a[i])
				{
					maxIndex = i;
					cnt = a[i];
				}
			}
		}
	}
	cout << cnt << '\n';
	result(maxIndex);


	return 0;
}