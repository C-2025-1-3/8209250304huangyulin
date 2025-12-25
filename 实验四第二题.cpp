#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double arr[], int size)
{
	bool changed;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
} 

int main() {
	const int size = 10;
	double nums[size];
	cout << "请输入10个双精度数字" << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> nums[i];
	}
	bubbleSort(nums , size);
	cout << "排序后的数字是：" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << fixed << setprecision(2) << nums[i] << " ";
	}
	cout << endl;
	return 0;
}
