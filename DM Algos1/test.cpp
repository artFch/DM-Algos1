#include <iostream>

using namespace std;

long long n, k, x, y;
bool mas[100][100], ans = true;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> mas[i][j];

	for (int a = 0; a < n; a++)
		for (int b = 0; b < n; b++)
			for (int c = 0; c < n; c++)
				if (a - b && b - c && a - c && mas[a][b] && mas[b][c] && !mas[a][c]) ans = false;

	if (ans) cout << "YES" << endl;
	else cout << "NO" << endl;
}