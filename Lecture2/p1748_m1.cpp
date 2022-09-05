#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		if (1 <= i && i <= 9) res += 1;
		else if (10 <= i && i <= 99) res += 2;
		else if (100 <= i && i <= 999) res += 3;
		else if (1000 <= i && i <= 9999) res += 4;
		else if (10000 <= i && i <= 99999) res += 5;
		else if (100000 <= i && i <= 999999) res += 6;
		else if (1000000 <= i && i <= 9999999) res += 7;
		else if (10000000 <= i && i <= 99999999) res += 8;
		else if (100000000 <= i) res += 9;
	}
	cout << res;
	return 0;
}