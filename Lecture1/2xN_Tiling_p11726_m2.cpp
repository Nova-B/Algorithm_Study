#include <iostream>
using namespace std;

int res[1001];

int Tiling(int n)
{
	if (res[n] > 0) return res[n];
	res[n] = ((Tiling(n-1) % 10007) + (Tiling(n-2) % 10007)) % 10007;
	return res[n];
}

int main()
{
	res[1] = 1;
	res[2] = 2;
	int n;
	cin >> n;
	cout<<Tiling(n);

	return 0;
}