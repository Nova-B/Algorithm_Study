#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
	string s8;
	cin >> s8;
	int num1 = 8 + s8[0] - '8';
	stack<int> s;
	while (1)
	{
		if (num1 < 2)
		{
			int len = s.size();
			cout << num1;
			for (int i = 0; i < len; i++)
			{
				cout << s.top();
				s.pop();
			}
			break;
		}
		int remainder = num1 % 2;
		num1 /= 2;
		s.push(remainder);
	}
	for (int i = 1; i < s8.length(); i++)
	{
		int num = 8 + s8[i] - '8';
		while (1)
		{
			if (num < 2)
			{
				int len = s.size();
				for (int j = 0; j < 2 - len; j++)
				{
					cout << 0;
				}
				cout << num;
				for (int j = 0; j < len; j++)
				{
					cout << s.top();
					s.pop();
				}
				break;
			}
			int remainder = num % 2;
			num /= 2;
			s.push(remainder);
		}
	}

	return 0;
}