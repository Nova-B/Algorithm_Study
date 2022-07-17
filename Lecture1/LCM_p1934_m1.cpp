//유클리드 호제법 사용
#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		int gcd = GCD(a, b);
		int lcm = a * b / gcd;
		cout << lcm << '\n';
	}
	return 0;
}