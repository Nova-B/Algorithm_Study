#include <iostream>
using namespace std;

int num[1001];
int main()
{
	num[1] = 1;
	num[2] = 2;
	int n;
	cin >> n;

	for (int i = 3; i <= n; i++)
	{
		num[i] = ((num[i - 1] % 10007) + (num[i - 2] % 10007)) % 10007;
	}
	cout << num[n];
	return 0;
}