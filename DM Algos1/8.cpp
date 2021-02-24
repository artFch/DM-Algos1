#include<iostream>
using namespace std;
void InsertionSort(int array[],int n)
{
	int i, j, k;
	for (i = 1; i < n; i++) {
		k = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > k)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = k;
	}
}
int main() 
{
	int i, j, n,t;
	cin >> n;
	if (n > 1000)
		return -1;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> t;
		a[i] = t;
	}
	InsertionSort(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[] a;
	return 0;
}