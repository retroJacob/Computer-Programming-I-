/*		
		Author:Jacob Morones
		Class: Computer Programming I
		Project: Program will calculate and print the bill for a telephone company

*/


#include <iostream>
 
using namespace std;

int main()
{
	char serviceCode;
	int accountNumber;
	double minutesUsedDay;
	double minutesUsedNight;
	double moneyOwedDay = 0 ;
	double moneyOwedNight = 0;
	double baseCostRegular = 10;
	double baseCostPremium = 25;
	double maxMinutesRegular = 50;
	double maxMinutesPremDay = 75;
	double maxMinutesPremNight = 100;
	double regularRatesOver = .2;
	double dayRatesOver = 0.10;
	double nightRatesOver = 0.05;
	 
	
	cout << "Enter Account Number: " << endl;
	cin  >> accountNumber;
	cout << endl;

	cout << "Enter Service Code: " << endl;
	cin  >> serviceCode;
	cout << endl;
	 
	if (serviceCode == 'P') {
		cout << "Enter the amount of minutes you used during the day: " << endl;
		cin >> minutesUsedDay;
		cout << endl;
		cout << "Enter the amount of minutes you used during the night: " << endl;
		cin >> minutesUsedNight;
		cout << endl;
	}
	if (serviceCode == 'p') {
		cout << "Enter the amount of minutes you used during the day: " << endl;
		cin >> minutesUsedDay;
		cout << endl;
		cout << "Enter the amount of minutes you used during the night: " << endl;
		cin >> minutesUsedNight;
		cout << endl;
	}
	if (serviceCode == 'R') {
		cout << "Enter the amount of minutes you have used: " << endl;
		cin >> minutesUsedDay;
		cout << endl;
	}
	if (serviceCode == 'r') {
		cout << "Enter the amount of minutes you have used: " << endl;
		cin >> minutesUsedDay;
		cout << endl;
	}
	

	switch (serviceCode)
	{
		case 'R':
		moneyOwedDay = baseCostRegular; 
		if (minutesUsedDay >= maxMinutesRegular)
		moneyOwedDay = (minutesUsedDay - maxMinutesRegular) * regularRatesOver + baseCostRegular;
		cout << "Account Number                : " << accountNumber << endl;
		cout << "Service Type                  : " << "Regular" << endl;
		cout << "Minutes Service Used          : " << minutesUsedDay << endl;
		cout << "Amount Due                    : $" << moneyOwedDay << endl;
		break;

		case 'r':
		moneyOwedDay = baseCostRegular;
		if (minutesUsedDay >= maxMinutesRegular)
		moneyOwedDay = (minutesUsedDay - maxMinutesRegular) * regularRatesOver + baseCostRegular;
		cout << "Account Number                : " << accountNumber << endl;
		cout << "Service Type                  : " << "Regular" << endl;
		cout << "Minutes Service Used          : " << minutesUsedDay << endl;
		cout << "Amount Due                    : $" << moneyOwedDay << endl;
		break;

		case 'P':
		moneyOwedDay = baseCostPremium;
		if (minutesUsedDay >= maxMinutesPremDay)
		moneyOwedDay = (minutesUsedDay - maxMinutesPremDay) * dayRatesOver + baseCostPremium;
		if (minutesUsedNight >= maxMinutesPremNight)
		moneyOwedNight = (minutesUsedNight - maxMinutesPremNight) * nightRatesOver;
		cout << "Account Number                     : " << accountNumber << endl;
		cout << "Service Type                       : " << "Premium" << endl;
		cout << "Minutes Service Used(Day)          : " << minutesUsedDay << endl;
		cout << "Minutes Service Used(Night)        : " << minutesUsedNight << endl;
		cout << "Amount Due                         : $" << moneyOwedDay + moneyOwedNight << endl;
		break;

		case 'p':
		moneyOwedDay = baseCostPremium;
		if (minutesUsedDay >= maxMinutesPremDay)
		moneyOwedDay = (minutesUsedDay - maxMinutesPremDay) * dayRatesOver + baseCostPremium;
		if (minutesUsedNight >= maxMinutesPremNight)
		moneyOwedNight = (minutesUsedNight - maxMinutesPremNight) * nightRatesOver;
		cout << "Account Number                     : " << accountNumber << endl;
		cout << "Service Type                       : " << "Premium" << endl;
		cout << "Minutes Service Used(Day)          : " << minutesUsedDay << endl;
		cout << "Minutes Service Used(Night)        : " << minutesUsedNight << endl;
		cout << "Amount Due                         : $" << moneyOwedDay + moneyOwedNight << endl;
		break;
		cout << endl;

	}

	 
	
}
/*Run 1
Account Number                : 102829
Service Type                  : Regular
Minutes Service Used          : 40
Amount Due                    : $10
	
Run 2
Account Number                : 100174
Service Type                  : Regular
Minutes Service Used          : 65
Amount Due                    : $13

Run 3
Account Number                     : 106603
Service Type                       : Premium
Minutes Service Used(Day)          : 70
Minutes Service Used(Night)        : 85
Amount Due                         : $25

Run 4
Account Number                     : 102909
Service Type                       : Premium
Minutes Service Used(Day)          : 100
Minutes Service Used(Night)        : 90
Amount Due                         : $27.5

Run 5
Account Number                     : 100818
Service Type                       : Premium
Minutes Service Used(Day)          : 60
Minutes Service Used(Night)        : 110
Amount Due                         : $25.5

Run 6
Account Number                     : 105432
Service Type                       : Premium
Minutes Service Used(Day)          : 95
Minutes Service Used(Night)        : 115
Amount Due                         : $27.75
*/