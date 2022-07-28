#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0) { cout << 0; return 0; }

	stack<int> s;

	while (n != 0)
	{
		s.push(abs(n % (-2)));
		n = (int)ceil((double)n / (-2));
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}