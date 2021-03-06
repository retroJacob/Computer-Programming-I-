/*
		Author: Jacob Morones
		Class: Computer Programming I
		Description: This program will input temperature and wind speed and then will output windchill factor
*/
#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;



void input(double&, double&);
void calculations(double, double, double);

int main()
{
	double V = 0; // wind speed in MPH
	double T = 0; //temperature in fahrenheit
	double W = 0; //windchill factor

	input(V, T);
	calculations(V, T, W);
}

void input(double& V, double& T)
{
	cout << "Enter the wind speed and temperature: ";
	cin >> V >> T;

}

void calculations(double V, double T, double W)
{
	cout << fixed << showpoint << setprecision(2) << endl;

	W = 35.74 + (0.6215 * T) - (35.75 * pow(V, 0.16)) + (0.4275 * T * pow(V, 0.16));

	cout << "The windchill factor is: " << W << " Degrees Fahrenheit" << endl;
}
/*
Enter the wind speed and temperature: 10 70

The windchill factor is: 70.83 Degrees Fahrenheit
Press any key to continue . . .
*/

/*
Enter the wind speed and temperature: 10 50

The windchill factor is: 46.04 Degrees Fahrenheit
Press any key to continue . . .
*/

/*
Enter the wind speed and temperature: 40 40

The windchill factor is: 26.95 Degrees Fahrenheit
Press any key to continue . . .
*/