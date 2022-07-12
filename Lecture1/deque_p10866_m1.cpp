#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int arr[20000] = {0};

class Deque
{
private:
	int len;
	int front;
	int back;
public:
	Deque() : len(0), front(10000), back(10001) {}
	void PushFront(int x)
	{
		arr[front--] = x;
	}
	void PushBack(int x)
	{
		if (Empty())
		{
			PushFront(x);
			return;
		}
		arr[back++] = x;
	}
	int PopFront()
	{
		if (Empty()) return -1;
		front += 1;
		int tmp = arr[front];
		arr[front] = 0;
		return tmp;
	}
	int PopBack()
	{
		if (Empty()) return -1;
		if (Size() == 1)
		{
			return PopFront();
		}
		else
		{
			back -= 1;
			int tmp = arr[back];
			arr[back] = 0;
			return tmp;
		}
	}
	int Size()
	{
		len = back - front - 1;
		return len;
	}
	bool Empty()
	{
		len = back - front - 1;
		if (len <= 0) return true;
		else return false;
	}
	int Front()
	{
		if (Empty()) return -1;
		return arr[front + 1];
	}
	int Back()
	{
		if (Empty()) return -1;
		if (Size() == 1) return arr[front + 1];
		else return arr[back - 1];
	}
};

int main()
{
	int n;
	cin >> n;

	Deque deque;

	while (n--)
	{
		string order;
		cin >> order;
		if (order == "push_front")
		{
			int x;
			cin >> x;
			deque.PushFront(x);
		}
		else if (order == "push_back")
		{
			int x;
			cin >> x;
			deque.PushBack(x);
		}
		else if (order == "pop_front")
		{
			cout << deque.PopFront() << '\n';
		}
		else if (order == "pop_back")
		{
			cout << deque.PopBack() << '\n';
		}
		else if (order == "size")
		{
			cout << deque.Size() << '\n';
		}
		else if (order == "empty")
		{
			if (deque.Empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (order == "front")
		{
			cout << deque.Front() << '\n';
		}
		else if (order == "back")
		{
			cout << deque.Back() << '\n';
		}
	}

	return 0;
}