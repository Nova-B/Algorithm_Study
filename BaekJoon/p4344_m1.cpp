#include <iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int stu[1000] = { 0 };
		float sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> stu[i];
			sum += stu[i];
		}
		float avg = sum / n;
		float cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (stu[i] > avg) { cnt++; }
		}
		printf("%.3f%%\n", cnt / n * 100);
	}
	return 0;
}