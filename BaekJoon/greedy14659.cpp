#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int maxCnt = 0;

	int* mount = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &mount[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (n - i < maxCnt) { break; }
		int canAttack = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (mount[i] < mount[j]) { break; }
			else
			{
				canAttack++;
			}
		}
		if (maxCnt < canAttack) { maxCnt = canAttack; }
	}
	printf("%d", maxCnt);
	delete[] mount;

	return 0;
}