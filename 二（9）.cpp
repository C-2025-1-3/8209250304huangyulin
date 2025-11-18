#include <iostream>
using namespace std;
int main()
{
	double pricpreapple = 0.8;
	int numapple = 2;
	double totalcost = 0;
	int day = 1;
	while (numapple <= 100)
	{
		totalcost += pricpreapple * numapple;
		pricpreapple = 0.8;
		numapple *= 2;
		day++;
	}
	double averagecost = totalcost / (day - 1);
	cout << "Total cost: " << totalcost << endl;
	cout << "Average cost per day: " << averagecost << endl;
	return 0;
}