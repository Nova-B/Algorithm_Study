#include <iostream>
using namespace std;

int a[1001] = { 0 };//수열a
int v[1001] = { 0 };//왜 바뀌게 되었는지를 기록하는 수열
int a[1001] = { 0 };//증가 부분 수열 개수 저장 수열
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