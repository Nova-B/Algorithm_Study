#include <iostream>
#include <string>
using namespace std;

int main()
{
	string bar;
	cin >> bar;
	bar += '.'; //끝나는 표시
	
	int i = 0;
	int cnt = 0;
	int result = 0;
	bool rasor = true;
	while (bar[i] != '.')
	{
		char c;
		c = bar[i];
		if (c == '(')
		{
			cnt++;
		}
		else if (c == ')' && rasor)
		{
			cnt--;
			result += cnt;
			if (bar[i + 1] == ')')
			{
				rasor = false;
			}
		}
		else if (c == ')' && !rasor)
		{
			cnt--;
			result++;
			if (bar[i + 1] == '(')
			{
				rasor = true;
			}
		}
		//cout << result << ' ';
		i++;
	}

	cout << result;
}