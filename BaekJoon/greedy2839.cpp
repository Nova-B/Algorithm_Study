#include <iostream>
using namespace std;

int main()
{
	int sugarWeight;
	cin >> sugarWeight;

	int wgt5;
	int wgt3;
	int cnt = 0;

	if(sugarWeight % 5 == 0)	//5�� ������ ������ ��
	{
		cnt = sugarWeight / 5;
		cout << cnt;
	}
	else if (sugarWeight % 3 == 0)	//3���� ������ ������ ��
	{
		int quotient3 = sugarWeight / 3;
		if (quotient3 >= 5)	//3���� ������ �������µ� 15kg �����δ� 5kg���� 3���� ��� ���� ����
		{
			cnt = (quotient3 / 5) * 3 + quotient3 % 5;
			cout << cnt;
		}
		else
		{
			cnt = quotient3;
			cout << cnt;
		}
	}
	else
	{
		int quotient5 = sugarWeight / 5;
		int remainder5 = sugarWeight % 5;
		if (remainder5 == 2)
		{
			if (quotient5 >= 2)
			{
				quotient5 -= 2;
			}
			else
			{
				cout << -1;
				return 0;
			}
		}
		if (remainder5 == 1 || remainder5 == 4)
		{
			if (quotient5 == 0)
			{
				cout << -1;
				return 0;
			}
			quotient5--;
		}
		cnt += quotient5;
		sugarWeight -= 5 * quotient5;
		cnt += sugarWeight / 3;
		cout << cnt;
	}

	return 0;
}