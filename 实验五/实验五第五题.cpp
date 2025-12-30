#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point() :x(60), y(80) {}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "Point set to (" << x << ", " << y << ")\n";
	}
};

int main()
{
	Point p;
	cout << "初始化后:";
	p.display();

	p.setPoint(10, 20);
	cout << "修改后:";
	p.display();
	return 0;
	
}