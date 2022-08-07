#include <iostream>
using namespace std;

int p[10001];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { cin >> p[i];}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			p[i] = max(p[i], p[i - j] + p[j]);
		}
	}
	cout << p[n];
	return 0;
}