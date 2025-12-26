#include <iostream>
using namespace std;
void sortarry(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cout << "输入数组元素个数:";
	cin >> n;
	int* arr = new int[n];
	cout << "输入数组元素:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sortarry(arr, n);
	cout << "排序后的数组元素:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}