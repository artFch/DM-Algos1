#include <iostream>
using namespace std;

int main() {
	int n,m,a,check,b,l[101][101];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		l[a][b] = l[b][a] = 1;
	}
	check = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			check &= l[i][j];
		}
	}

	if (check == 1) 
		cout <<"YES";
	else
		cout <<"NO";
	return 0;
} 