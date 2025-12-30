#include <iostream>
using namespace std;
class  Time
{
private:
	int hour;
	int minute;
	int sec ;
public:
	void inputTime()
	{
		cin >> hour >> minute >> sec;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;
	tl.inputTime();
	tl.showTime();
	return 0;
}