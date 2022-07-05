#include <iostream>
#include <cstring>
using namespace std;

class stack
{
private:
	int* s;
	int size = 0;
public:
	stack(int s)
	{
		this->s = new int[s];
		for (int i = 0; i < s; i++)
		{
			this->s[i] = 0;
		}
	}

	void Push(int x)
	{
		s[size] = x;
		size++;
	}

	void Pop()
	{
		if ((size) == 0)
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << s[(size - 1)] << "\n";
			s[(size - 1)] = 0;
			size--;
		}
	}

	void Size()
	{
		cout << size << "\n";
	}

	void Empty()
	{
		if ((size) == 0) { cout << 1 << "\n"; }
		else { cout << 0 << "\n"; }
	}

	void Top()
	{
		if (size == 0) { cout << -1 << "\n"; }
		else { cout << s[(size - 1)] << "\n"; }
	}

	~stack()
	{
		delete[] s;
	}
};

int main()
{
	int n;
	cin >> n;
	stack s(n);

	while (n--)
	{
		char order[6];
		cin >> order;
		if (strcmp(order, "push") == 0)
		{
			int num;
			cin >> num;
			s.Push(num);
		}
		else if (strcmp(order, "pop") == 0)
		{
			s.Pop();
		}
		else if (strcmp(order, "size") == 0)
		{
			s.Size();
		}
		else if (strcmp(order, "empty") == 0)
		{
			s.Empty();
		}
		else if (strcmp(order, "top") == 0)
		{
			s.Top();
		}
	}
}