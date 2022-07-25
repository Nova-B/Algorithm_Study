#include <iostream>
#include <stack>
#include <cstring>
#include <cmath>
using namespace std;

char n[1000000];

int main()
{
	cin >> n;
	stack<int> s;
	int decimal = 0;
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] == '0') { s.push(0); }
		else if (n[i] == '1') { s.push(1); }
	}
	for (int i = 0; i < strlen(n); i++)
	{
		if (s.top() == 1) { decimal += pow(2, i); }
		s.pop();
	}
	stack<int> octal;
	while (1)
	{
		if (decimal / 8 <= 7) 
		{ 
			octal.push(decimal % 8);
			octal.push(decimal / 8);
			break; 
		}
		octal.push(decimal % 8);
		decimal /= 8;
	}
	int len = octal.size();
	for (int i = 0; i < len; i++)
	{
		cout << octal.top();
		octal.pop();
	}
	return 0;
}