//큐도 사용함
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int n; cin >> n;
	int m = n;//n이 3이면 baseArr 스택에 3,2,1을 만들어 하나씩 빼려고 함.
	int* goalArr = new int[n]; //만들고자 하는 스택
	stack<int> baseStack; //n이 3이면 baseArr 스택에 3,2,1이다.

	for (int i = 0; i < n; i++)
	{
		cin >> goalArr[i];
		baseStack.push(m--);
	}

	stack<int> temp;
	queue<char> answer;	//+ - 저장

	for (int i = 0; i < n; i++)
	{
		if (i == 0)	//처음은 무조건 가능
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
			//만들어야하는 수열의 n항이 n-1보다 작을 때
			//temp stack의 top과 같지 아니면 만들 수 없음
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
			//만들어야하는 수열의 n항이 n-1보다 클 때
			//basestack의 top과 goalArr의 차이 + 1만큼 temp에 푸시하고 한번 pop
			//불가능한 경우 없음
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