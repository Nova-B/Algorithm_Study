#include <iostream>
using namespace std;
int main()
{
	int e, s, m; cin >> e >> s >> m;
	int res = 1;
	while (true)
	{
		int e1, s1, m1;
		e1 = res % 15;
		s1 = res % 28;
		m1 = res % 19;
		if (e1 == 0) { e1 = 15; }
		if (s1 == 0) { s1 = 28; }
		if (m1 == 0) { m1 = 19; }
		if (e == e1 && s == s1 && m == m1)
		{
			cout << res;
			break;
		}
		res++;
	}
	return 0;
}