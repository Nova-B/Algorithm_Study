#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n; cin >> n;
	if (n < 10)
	{
		cout << n;
		return 0;
	}
	int id = 1;
	while (true)
	{
		int num = pow(10, id);
		if (n / num < 10)
		{
			break;
		}
		id++;
	}
	int res = 0;
	for (int i = 1; i <= id; i++)
	{
		res += 9 * i * pow(10, i - 1);
	}

	int r = n - pow(10, id) + 1;
	res += r * (id + 1);
	cout << res;
	return 0;
}