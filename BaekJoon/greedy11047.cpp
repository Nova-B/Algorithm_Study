#include <iostream>
using namespace std;

int main()
{
	int kind, total; //kind = N, total = K
	cin >> kind >> total;
	int* money_unit = new int[kind];	//µ· Á¾·ù
	for (int i = 0; i < kind; i++)
	{
		cin >> money_unit[i];
	}
	
	int cnt = 0;	//ÃÑ µ· °³¼ö

	for (int i = kind - 1; i >= 0; i--)
	{
		if (total <= 0) { break; }

		cnt += total / money_unit[i];
		total %= money_unit[i];
	}

	cout << cnt;

	return 0;
}