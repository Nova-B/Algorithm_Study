#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	s += '\n';
	stack<char> word;
	bool isInbracket = false;
	for(int i = 0; i < s.length(); i++)
	{
		if (s[i] == '<')
		{
			isInbracket = true;
		}
		if (isInbracket)
		{
			if (s[i] == '>')
			{
				isInbracket = false;
			}
			else {
				continue;
			}
		}

		if (s[i] != ' ')
		{
			word.push(s[i]);
		}
		else if (!word.empty() && (s[i] == ' ' || s[i] == '\n' || s[i] == '<'))
		{
			int len = word.size();
			for (int i = 0; i < len; i++)
			{
				cout << word.top();
				word.pop();
			}
			cout << ' ';
		}
		if (s[i] == '\n') { break; }
		
	}

	return 0;
}