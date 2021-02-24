#include<iostream>
using namespace std;
const int c = 100;
void dList(int list[c][2], int n) {
	for (int i = 0; i < n;i++)
		for (int j = 0; j < 2;j++) {
			list[i][1] = 0;
			list[i][0] = 0;
		}
}
int main()
{
	int n, m;
	int v1, v2;
	int l[c][2];

	cin >> n;
	/*if (n > 100){
		cout << "Error";
		return -1;
	}*/
	cin >> m;
	/*if (m > n - 1) {
		cout << "Error1";
		return -1;
	}*/
	dList(l, n);

	for (int i = 0; i < m; i++) {
		cin >> v1 >> v2;
		l[v2 - 1][0]++;
		l[v1 - 1][1]++;
	}
	for (int i = 0; i < n; i++) {
		cout << l[i][0] << endl << l[i][1] << endl;
	}
	return 0;
}