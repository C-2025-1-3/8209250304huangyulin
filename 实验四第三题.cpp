#include <iostream>
using namespace std;
int main()
{
	const int CABINET_NUM = 100;
	bool cabinet[CABINET_NUM] = { false }; // false means empty, true means occupied
	for (int student=1;student<=CABINET_NUM;++student)
	{
		for (int cab=student-1;cab< CABINET_NUM;cab+=student)
		{
			cabinet[cab] = !cabinet[cab];
		}
	}
	cout << "开着的存物柜号码:";
	for (int i = 0; i < CABINET_NUM; ++i)
	{
		if (cabinet[i])
		{
			cout << (i + 1) << " ";
		}
	}
	cout << endl;
	return 0;
}