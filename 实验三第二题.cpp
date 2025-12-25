#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i <= static_cast<int>(std::sqrt(num)); i += 2) {
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()// 调用 isPrime 进行测试
{    
	int count = 0;
	int num = 2;
	cout << "前200个素数为：" << endl;
	while (count<200)
	{
		if (isPrime(num)) {
			cout << setw(6) << num;
			count++;
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}