#include <iostream>

using namespace std;
int main()
{
	int n;
	bool f = 1;
	cin >> n;
	if (n > 100)
		return -1;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < n; c++){
				if (a - b && b - c && a - c && arr[a][b] && arr[b][c] && !arr[a][c])
					f = 0;
			}
		}			
	}
	
	if (f)
		cout << "YES" << endl;
	else cout << "NO" << endl;

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	return 0;
}