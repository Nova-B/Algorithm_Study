#include <iostream>
#include <cstring>
using namespace std;

int len = 0;
int stack[10000];

void Push(int x)
{
	stack[len] = x;
	len++;
}

bool Empty()
{
	if (len <= 0) { return true; }
	else { return false; }
}

void Pop()
{
	if (Empty()) { cout << -1 << "\n"; }
	else
	{
		cout << stack[len - 1] << "\n";
		len--;
	}
}

void Size() { cout << len << "\n"; }

void Top()
{
	if (Empty()) { cout << -1 << "\n"; }
	else { cout << stack[len - 1] << "\n"; }
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char order[6];
		cin >> order;
		if (strcmp(order, "push") == 0)
		{
			int x;
			cin >> x;
			Push(x);
		}
		else if (strcmp(order, "pop") == 0) { Pop(); }
		else if (strcmp(order, "size") == 0) { Size(); }
		else if (strcmp(order, "empty") == 0)
		{
			if (Empty()) { cout << 1 << "\n"; }
			else { cout << 0 << "\n"; }
		}
		else if (strcmp(order, "top") == 0) { Top(); }
	}

	return 0;
}