#include <iostream>
#include <cmath>
using namespace std;

//1
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	int n;
//	cin >> n;
//	int res = n / 125 + n / 25 + n / 5;
//	cout << res;
//}

//2
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int cnt = 1;
	int res = 0;
	while (pow(5, cnt) <= n) { cnt++; }
	for (int i = 1; i <= cnt; i++)
	{
		res += n / pow(5, i);
	}
	cout << res;
}