/*
		Author: Jacob Morones
		Class: Computer Programming I
		Description: prompts the user to input the length of the sides of a triangle, and outputs the shape of the triangle
*/
#include <iostream>
#include <string>
using namespace std;

enum triangleType { scalene, isosceles, equilateral, noTriangle };

int triangleShape(int, int, int, triangleType&);
void printShape(triangleType&);

int main()
{
	int lengthOne = 0;
	int lengthTwo = 0;
	int lengthThree = 0;
	triangleType shape = scalene;

	cout << "Side 1 = ";
	cin >> lengthOne;

	cout << "Side 2 = ";
	cin >> lengthTwo;

	cout << "Side 3 = ";
	cin >> lengthThree;

	triangleShape(lengthOne, lengthTwo, lengthThree, shape);
	printShape(shape);

}
int triangleShape(int lengthOne, int lengthTwo, int lengthThree, triangleType& shape)

{
	if (lengthOne == lengthTwo && lengthOne == lengthThree)
		shape = equilateral;



	if (lengthOne != lengthTwo && lengthOne != lengthTwo && lengthThree != lengthTwo && lengthOne + lengthTwo > lengthThree && lengthTwo + lengthThree > lengthOne && lengthThree + lengthOne > lengthTwo)
		shape = scalene;

	if (lengthOne == lengthTwo && lengthTwo != lengthThree || lengthTwo == lengthThree && lengthTwo != lengthOne)
		shape = isosceles;

	if(lengthOne + lengthTwo < lengthThree || lengthTwo + lengthThree < lengthOne || lengthThree + lengthOne < lengthTwo)
		shape = noTriangle;

	return 0;

}

void printShape(triangleType& shape)
{
	switch (shape)
	{
	case scalene:
		cout << "It is a scalene triangle" << endl;
		break;

	case isosceles:
		cout << "It is an isosceles triangle" << endl;
		break;
	case equilateral:
		cout << "It is an equilateral triangle" << endl;
		break;

	case noTriangle:
		cout << "It is not a triangle" << endl;
		break;

	}

}
/*
Side 1 = 3
Side 2 = 3
Side 3 = 3
It is an equilateral triangle

Side 1 = 3
Side 2 = 4
Side 3 = 5
It is a scalene triangle

Side 1 = 3
Side 2 = 5
Side 3 = 5
It is an isosceles triangle

Side 1 = 3
Side 2 = 4
Side 3 = 8
It is not a triangle

*/