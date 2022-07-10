#include <iostream>
#include <queue>

using namespace std;

int arr[5000];

int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> result;
	for (int i = 0; i < n; i++) { arr[i] = i + 1; }

	int index = k - 1;

	while (1)
	{
		//for (int i = 0; i < n; i++) { cout << arr[i]; }
		//cout << '\n';
		//cout << index << ',';
		result.push(arr[index]);
		if (result.size() == n) break;
		arr[index] = 0;
		while (arr[index] == 0) //다음시작점 찾기
		{
			index++;
			if (index >= n) { index -= n; }
		}
		//cout << '-' << index << "-\n";
		int cnt = 0;//다음 시작점으로부터 배열의 0값이 아닌 값이 2번째일때를 찾아야함
		while (cnt < k - 1)
		{
			index++;
			if (index >= n) { index -= n; }
			if (arr[index] == 0) { continue; }
			else if (arr[index] > 0) { cnt++; }
		}
		//cout << '-' << index << "-\n";
	}
	int size = result.size();
	cout << '<';
	for (int i = 0; i < size; i++)
	{
		cout << result.front();
		result.pop();
		if (i < size - 1) { cout << ", "; }
	}
	cout << '>';
	return 0;
}