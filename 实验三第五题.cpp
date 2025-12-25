#include <iostream>
using namespace std;
int peach(int day)
{
	if (day==10)
	{
		return 1;
	}
	return (peach(day + 1) + 1) * 2;
}
int main()
{
	cout << "The number of peaches on the first day is: " << peach(1) << endl;
	return 0;
}