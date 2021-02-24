#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, m,f,l;
	cin >> n >> m;
	if (m >= 20000)
		return -1;
	vector<long> a(n);
	vector<long> b(m);

	for (int i = 0; i < n; i++)
		cin >> a.at(i);
	for (int i = 0; i < m; i++)
		cin >> b.at(i);
	for (int i = 0; i < m; ++i)
	{
		auto lower = lower_bound(a.begin(), a.end(), b[i]);
		auto upper = upper_bound(a.begin(), a.end(), b[i]);

			auto check = find(a.begin(), a.end(), b[i]);
			if (check != a.end()) {
			cout << distance(a.begin(), lower) + 1 << " " << distance(a.begin(), upper);
			}
			else
			{
				cout << '0';
			}
		cout << '\n';

	}
	return 0;
}