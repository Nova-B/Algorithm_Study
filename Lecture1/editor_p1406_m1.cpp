#include <iostream>
#include <stack>
#include <string>

using namespace std;
stack<char> s_left;
stack<char> s_right;

void MovingLeft()
{
	if (s_left.size() <= 0) return;

	s_right.push(s_left.top());
	s_left.pop();
}

void MovingRight()
{
	if (s_right.size() <= 0) return;

	s_left.push(s_right.top());
	s_right.pop();
}

void EraseLeftChar()
{
	if (s_left.size() <= 0) return;

	s_left.pop();
}

void InsertLeftChar(char c)
{
	s_left.push(c);
}

void PrintResult()
{
	if (s_left.size() > 0)
	{
		int len = s_left.size();
		for (int i = 0; i < len; i++)
		{
			s_right.push(s_left.top());
			s_left.pop();
		}
	}

	int result_len = s_right.size();
	for (int i = 0; i < result_len; i++)
	{
		cout << s_right.top();
		s_right.pop();
	}
}

int main()
{

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		s_left.push(s[i]);
	}

	int m;
	cin >> m;

	while (m--)
	{
		char order;
		cin >> order;
		switch (order)
		{
		case 'L':
			MovingLeft();
			break;
		case 'D':
			MovingRight();
			break;
		case 'B':
			EraseLeftChar();
			break;
		case 'P':
			char c;
			cin >> c;
			cin.ignore();

			InsertLeftChar(c);
		}
	}

	PrintResult();
}