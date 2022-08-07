#include <iostream>
using namespace std;

int main()
{
	int res[12] = { 0, 1, 2, 4 };
	for (int i = 4; i <= 11; i++)
	{
		res[i] = res[i - 1] + res[i - 2] + res[i - 3];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << res[n] << '\n';
	}
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int res[12] = { 0, 1, 2, 4 };
//
//int plus123(int n)
//{
//	if (res[n] > 0) return res[n];
//	res[n] = plus123(n - 1) + plus123(n - 2) + plus123(n - 3);
//	return res[n];
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		cout << plus123(n) << '\n';
//	}
//	return 0;
//}