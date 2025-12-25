#include <iostream>
#include <cstdlib>
using namespace std;
void computeGcdLcm(int a, int b, int& gcd, long long& lcm)
{
	if (a == 0 && b == 0)
	{
		gcd = 0;
		lcm = 0;
		return;
	}
	int x = abs(a);
	int y = abs(b);
	while (y != 0)
	{
		int r = x % y;
		x = y;
		y = r;
	}
	gcd = x;
	if (gcd == 0)
	{
		lcm = 0;
	}
	else
	{
		lcm = static_cast<long long>(abs(a)) / gcd * abs(b);
		if (lcm < 0) lcm = -lcm;
	}
}
int main()
{
	int m, n;
	if (!(cin >> m >> n)) {
		return 0;
	}int gcd;
	long long lcm;
	computeGcdLcm(m, n, gcd, lcm);
	cout << "最大公约数" << gcd << endl;
	cout << "最小公倍数" << lcm << endl;
	return 0;
}