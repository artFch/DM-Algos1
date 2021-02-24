#include<iostream>
using namespace std;
void swap(int* x1, int* x2)
{
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}
void SelectionSort(int array[], int n)
{
	int i, j, max;
	for (i = n-1; i >= 0; i--) {
		max = i;
		for (j = 0; j < i;j++) {
			if (array[j] > array[max])
				max = j;
		}
		swap(&array[max], &array[i]);
	}
}
int main()
{
	int i, j, n, t;
	cin >> n;
	if (n > 1000)
		return -1;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> t;
		a[i] = t;
	}
	SelectionSort(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[] a;
	return 0;
}