#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return 0;
}