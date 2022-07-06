#include <iostream>
using namespace std;

void QuickSort(int* data, int start, int end);

int main()
{
	int people;
	cin >> people;

	int* waitTime = new int[people];
	int totalTime = 0;

	for (int i = 0; i < people; i++)
	{
		cin >> waitTime[i];
	}

	QuickSort(waitTime, 0, people - 1);

	for (int i = 0; i < people; i++)
	{
		totalTime += waitTime[i] * (people - i);
	}

	cout << totalTime;
	delete[] waitTime;

	return 0;
}

void QuickSort(int* data, int start, int end)
{
	if (start >= end) { return; }

	int key = start;
	int much = start + 1;
	int less = end;
	int tmp;

	while (much <= less)
	{
		while (data[key] >= data[much] && much < end + 1)
		{
			much++;
		}
		while (data[key] <= data[less] && less > start)
		{
			less--;
		}

		if (much > less)
		{
			tmp = data[key];
			data[key] = data[less];
			data[less] = tmp;
		}
		else
		{
			tmp = data[much];
			data[much] = data[less];
			data[less] = tmp;
		}
	}

	QuickSort(data, start, less - 1);
	QuickSort(data, less + 1, end);
}