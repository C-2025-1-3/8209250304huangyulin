#include <iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputData()
	{
		cout << "Enter length, width and height: ";
		cin >> length >> width >> height;
	}
	double volume()
	{
		return length * width * height;
	}
};
int main()
{
	Cuboid c1, c2, c3;
	cout << "请输入第一个长方柱:\n";
	c1.inputData();
	cout << "请输入第二个长方柱:\n";
	c2.inputData();
	cout << "请输入第三个长方柱:\n";
	c3.inputData();
	cout << "第一个长方柱的体积为: " << c1.volume() << endl;
	cout << "第二个长方柱的体积为: " << c2.volume() << endl;
	cout << "第三个长方柱的体积为: " << c3.volume() << endl;

	return 0;
}