#include <iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 10;
	int uniqueNumbers[MAX_SIZE];
	int count = 0;
	cout << "请输入10个整数:" << endl;
	for(int i=0;i<10;++i)
	{
		int num;
		cin >> num;
		bool isDuplicate = false;
		for(int j=0;j<count;++j)
		{
			if(uniqueNumbers[j]==num)
			{
				isDuplicate = true;
				break;
			}
		}
		if(!isDuplicate && count < MAX_SIZE)
		{
			uniqueNumbers[count++] = num;
			
		}
	}
	cout << "不同的数:" << endl;
	for (int i = 0; i < count; ++i)
	{
		cout << uniqueNumbers[i] << "";
	}cout << endl;
	return 0;	
}