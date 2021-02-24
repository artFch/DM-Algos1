#include<iostream>
using namespace std;
void swap(int *x1, int *x2) 
{
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}


void BubleSort(int array[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
}


int main() 
{
	int n,i,j,t;
	cin >> n;
	if (n > 1000)
		return -1;
	int *a = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> t;
		a[i] = t;
	}
	BubleSort(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[] a;
	return 0;
}
