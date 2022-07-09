#include <iostream>
#include <string>

using namespace std;

int arr[10000];
int first_index = 0;
int last_index = 0;

void Push(int a)
{
    arr[last_index] = a;
    last_index++;
}

int Pop()
{
    if (last_index - first_index <= 0) return -1;
    int result = arr[first_index];
    arr[first_index] = 0;
    first_index++;

    return result;
}

int Size() { return last_index - first_index; }

bool Empty()
{
    if (Size() <= 0) return true;
    else return false;
}

int Front()
{
    if (Empty()) return -1;
    return arr[first_index];
}

int Back()
{
    if (Empty()) return -1;
    return arr[last_index - 1];
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string order;
        cin >> order;

    }

    return 0;
}