#include <iostream>>
using namespace std;
int rgb[1001][3] = { 0 };
int r[1001][3] = { 0 };
int g[1001][3] = { 0 };
int b[1001][3] = { 0 };
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> rgb[i][j];
		}
	}
	r[2][1] = rgb[1][0] + rgb[2][1];
	r[2][2] = rgb[1][0] + rgb[2][2];

	g[2][0] = rgb[1][1] + rgb[2][0];
	g[2][2] = rgb[1][1] + rgb[2][2];

	b[2][0] = rgb[1][2] + rgb[2][0];
	b[2][1] = rgb[1][2] + rgb[2][1];

	r[3][0] = min(r[2][1], r[2][2]) + rgb[3][0];
	r[3][1] = r[2][2] + rgb[3][1];
	r[3][2] = r[2][1] + rgb[3][2];

	g[3][1] = min(g[2][0], g[2][2]) + rgb[3][1];
	g[3][0] = g[2][2] + rgb[3][0];
	g[3][2] = g[2][0] + rgb[3][2];

	b[3][2] = min(b[2][0], b[2][1]) + rgb[3][2];
	b[3][0] = b[2][1] + rgb[3][0];
	b[3][1] = b[2][0] + rgb[3][1];

	if (n <= 3)
	{
		int rMin = min(r[n][1], r[n][2]);
		int gMin = min(g[n][0], g[n][2]);
		int bMin = min(b[n][0], b[n][1]);

		int res = min(rMin, gMin);
		res = min(res, bMin);
		cout << res;
		return 0;
	}
	for (int i = 4; i < n; i++)
	{
		r[i][0] = rgb[i][0] + min(r[i - 1][1], r[i - 1][2]);
		r[i][1] = rgb[i][1] + min(r[i - 1][0], r[i - 1][2]);
		r[i][2] = rgb[i][2] + min(r[i - 1][0], r[i - 1][1]);

		g[i][0] = rgb[i][0] + min(g[i - 1][1], g[i - 1][2]);
		g[i][1] = rgb[i][1] + min(g[i - 1][0], g[i - 1][2]);
		g[i][2] = rgb[i][2] + min(g[i - 1][0], g[i - 1][1]);

		b[i][0] = rgb[i][0] + min(b[i - 1][1], b[i - 1][2]);
		b[i][1] = rgb[i][1] + min(b[i - 1][0], b[i - 1][2]);
		b[i][2] = rgb[i][2] + min(b[i - 1][0], b[i - 1][1]);
	}

	r[n][1] = rgb[n][1] + min(r[n - 1][0], r[n - 1][2]);
	r[n][2] = rgb[n][2] + min(r[n - 1][0], r[n - 1][1]);

	g[n][0] = rgb[n][0] + min(g[n - 1][1], g[n - 1][2]);
	g[n][2] = rgb[n][2] + min(g[n - 1][0], g[n - 1][1]);

	b[n][0] = rgb[n][0] + min(b[n - 1][1], b[n - 1][2]);
	b[n][1] = rgb[n][1] + min(b[n - 1][0], b[n - 1][2]);

	int rMin = min(r[n][1], r[n][2]);
	int gMin = min(g[n][0], g[n][2]);
	int bMin = min(b[n][0], b[n][1]);

	int res = min(rMin, gMin);
	res = min(res, bMin);
	cout << res;
	return 0;
}