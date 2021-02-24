#include<iostream>
using namespace std;
const int c = 10;
void declareM(int m[c][c],  int n)
{
	for (int i = 0;i < n;i++)
		for (int j = 0;j < n;j++) {
			cin >> m[i][j];
		}
}
int main()
{
	int a[c][c];
	int n;
	cin >> n;
	if (n > 100) {
		cout << "Error" << endl;
		return -1;
	}
	declareM(a, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] == 1)
			{
				cout << i + 1 << " " << j + 1 << endl;
			}
		}
	}
	return 0;
}