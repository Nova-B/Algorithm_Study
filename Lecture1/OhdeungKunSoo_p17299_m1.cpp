#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* numArr = new int[1000000]();
	int* cntArr = new int[1000000]();
	
	for (int i = 0; i < n; i++)
	{
		cin >> numArr[i];
		cntArr[numArr[i]]++;
	}

	stack<int> numStack;
	stack<int> cntStack;
	numStack.push(numArr[n - 1]);
	cntStack.push(cntArr[numArr[n - 1]]);
	for (int i = n - 2; i >= 0; i--)
	{
		int cnt = cntArr[numArr[i]];
		if (cnt < cntStack.top())
		{
			int tmp = numStack.top();//numarr에 쓰여질 숫자
			numStack.push(numArr[i]);
			cntStack.push(cnt);
			numArr[i] = tmp;
		}
		else
		{
			while (1)
			{
				numStack.pop();
				cntStack.pop();
				if (cntStack.empty())
				{
					numStack.push(numArr[i]);
					cntStack.push(cnt);
					numArr[i] = -1;
					break;
				}
				if (cnt < cntStack.top())
				{
					int tmp = numStack.top();//numarr에 쓰여질 숫자
					numStack.push(numArr[i]);
					cntStack.push(cnt);
					numArr[i] = tmp;
					break;
				}

			}
		}
	}
	numArr[n - 1] = -1;

	for (int i = 0; i < n; i++)
	{
		cout << numArr[i] << ' ';
	}
}