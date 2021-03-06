/*
			Author: Jacob Morones
			Class: Computer Programming I
			Description: Will input 2 x, y values, then will use functions to output radius, diameter, circumference, and area. 

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.1416;


 double distance(double, double, double, double);
 
double radius(double, double, double, double);
 
double circumference(double, double);
 
double area(double, double);


int main()
{
	double x1, x2, y1, y2;
	double circleRadius;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the x and y coordinates of the center of the circle: ";
	cin >> x1 >> y1;
	cout << endl;

	cout << "Enter the x and y coordinates of a point on the circle: ";
	cin >> x2 >> y2;
	cout << endl;

	circleRadius = radius(x1,x2,y1,y2);

		cout << "Radius =        " << circleRadius << endl;
	cout << "Diameter =      " << 2 * circleRadius << endl;
	cout << "Circumference = " << circumference(circleRadius,PI) << endl;
	cout << "Area =          " << area(circleRadius,PI) << endl;

	return 0;
}

// Student adds code for distance function header and definition
double distance(double x1, double x2, double y1, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


// Student adds code for radius function header and definition
double radius(double x1, double x2, double y2, double y1)
{
	return distance(x1,x2,y2,y1);
}

// Student adds code for circumference function header and definition
double circumference(double circleRadius, double PI)
{
	return 2 * PI * circleRadius;
}

// Student adds code for area function header and definition
double area(double PI, double circleRadius)
{
	return PI * pow(circleRadius,2);
}

/*
Enter the x and y coordinates of the center of the circle: 0.0 0.0

Enter the x and y coordinates of a point on the circle: 5.50
5.50

Radius =        7.78
Diameter =      15.56
Circumference = 48.87
Area =          76.77
Press any key to continue . . .
*/

/*Enter the x and y coordinates of the center of the circle: 50 0

Enter the x and y coordinates of a point on the circle: 2.75 19.75

Radius =        51.21
Diameter =      102.42
Circumference = 321.77
Area =          505.44
Press any key to continue . . .*/