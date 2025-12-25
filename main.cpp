#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	cout<<left
		<< setw(12) << "Celsius"
		<< setw(15) << "Fahrenheit"
		<<""
		<< setw(15) << "Fahrenheit"
		<< setw(12) << "Celsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	while (cel>=31.0&& fah>=30.0)
	{
		double fah_result = celsius_to_fah(cel);
		double cel_result = fahrenheit_to_cels(fah);
		cout<<setw(12) << cel
			<< setw(15) << fah_result
			<<""
			<< setw(15) << fah
			<< setw(12) << cel_result << endl;
		cel -= 1.0;
		fah -= 10.0;
	}
	return 0;
}