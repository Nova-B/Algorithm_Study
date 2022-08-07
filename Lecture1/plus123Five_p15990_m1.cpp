#include <iostream>
using namespace std;

long long lastone[100001];//i�� ����µ� ������ ���ϴ� ���� 1�� ���
long long lasttwo[100001];//i�� ����µ� ������ ���ϴ� ���� 2�� ���
long long lastthree[100001];//i�� ����µ� ������ ���ϴ� ���� 3�� ���
long long sum[100001];

int main()
{
	lastone[1] = 1;
	lasttwo[2] = 1;
	lastone[3] = 1;
	lasttwo[3] = 1;
	lastthree[3] = 1;
	sum[1] = 1;
	sum[2] = 1;
	sum[3] = 3;

	for (int i = 4; i < 100001; i++)
	{
		lastone[i] = (lasttwo[i - 1] + lastthree[i - 1]) % 1000000009;
		lasttwo[i] = (lastone[i - 2] + lastthree[i - 2]) % 1000000009;
		lastthree[i] = (lastone[i - 3] + lasttwo[i - 3]) % 1000000009;
		sum[i] = (lastone[i] + lasttwo[i] + lastthree[i]) % 1000000009;
	}

	int t;
	cin >> t;
	while (t--)
	{
		int tmp;
		cin >> tmp;
		cout << sum[tmp] << '\n';
	}
	return 0;
}