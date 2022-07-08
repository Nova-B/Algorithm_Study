//ť�� �����
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int n; cin >> n;
	int m = n;//n�� 3�̸� baseArr ���ÿ� 3,2,1�� ����� �ϳ��� ������ ��.
	int* goalArr = new int[n]; //������� �ϴ� ����
	stack<int> baseStack; //n�� 3�̸� baseArr ���ÿ� 3,2,1�̴�.

	for (int i = 0; i < n; i++)
	{
		cin >> goalArr[i];
		baseStack.push(m--);
	}

	stack<int> temp;
	queue<char> answer;	//+ - ����

	for (int i = 0; i < n; i++)
	{
		if (i == 0)	//ó���� ������ ����
		{
			int cnt = goalArr[i];
			for (int j = 0; j < cnt; j++)
			{
				temp.push(baseStack.top());
				baseStack.pop();
				answer.push('+');
				//cout << "+\n";
			}
			temp.pop();
			answer.push('-');
			//cout << "-\n";
		}
		else if (goalArr[i] < goalArr[i - 1])
		{
			//�������ϴ� ������ n���� n-1���� ���� ��
			//temp stack�� top�� ���� �ƴϸ� ���� �� ����
			if (goalArr[i] == temp.top())
			{
				temp.pop();
				answer.push('-');
				//cout << "-\n";
			}
			else
			{
				cout << "NO";
				return 0;
			}
		}
		else if (goalArr[i] > goalArr[i - 1])
		{
			//�������ϴ� ������ n���� n-1���� Ŭ ��
			//basestack�� top�� goalArr�� ���� + 1��ŭ temp�� Ǫ���ϰ� �ѹ� pop
			//�Ұ����� ��� ����
			int cnt = goalArr[i] - baseStack.top() + 1;
			for (int i = 0; i < cnt; i++)
			{
				temp.push(baseStack.top());
				baseStack.pop();
				answer.push('+');
				//cout << "+\n";
			}
			temp.pop();
			answer.push('-');
			//cout << "-\n";
		}
	}

	int size = answer.size();

	for (int i = 0; i < size; i++)
	{
		cout << answer.front() << '\n';
		answer.pop();
	}

	delete[] goalArr;

	return 0;
}