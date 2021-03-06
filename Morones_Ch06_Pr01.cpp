/*
		Author: Jacob Morones
		Class:  Computer Programming I
		Program: This program will input a sentance and a radius and will output surface area, volume, and the number of vowels in the sentance using functions
*/


#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

const double PI = 3.14159;
 
bool isVowel(char);

int main()
{
	char ch;
	int numberOfVowels = 0;

	cout << "Enter a sentence." << endl;


	cin.get(ch);
	while (ch != '\n')
	{
		cin.get(ch);
		if (isVowel(ch) == true)
			numberOfVowels++;

	}

	cout << "There are " << numberOfVowels
		<< " vowels in this sentence." << endl << endl;

	double r;

	cout << " sqrt(PI) = ";
	cout << sqrt(PI);
	cout << endl << endl;

	cout << "Enter a value of r: ";
	cin >> r;
	cout << endl;

	cout << "4 * PI * (r to the power of 2) = ";
	cout << 4 * PI * (pow(r, 2));
	cout << endl;

	cout << "4 / 3 * PI * (r to the power of 3) = ";
	cout << 4 / 3.0 * PI * (pow(r, 3));
	cout << endl << endl;

	return 0;
}


 
bool isVowel(char ch)
{

	switch (ch) {
	case 'A':
		return true;
		break;
	case 'E':
		return true;
		break;
	case 'I':
		return true;
		break;
	case 'O':
		return true;
		break;
	case 'U':
		return true;
		break;
	case 'a':
		return true;
		break;
	case 'e':
		return true;
		break;
	case 'i':
		return true;
		break;
	case 'o':
		return true;
		break;
	case 'u':
		return true;
		break;
	default:
		return false;
		break;
	}

	


}
/*
Enter a sentence.
The quick brown fox jumps over the lazy dog.
There are 11 vowels in this sentence.

sqrt(PI) = 1.77245

Enter a value of r: 5.75

4 * PI * (r to the power of 2) = 415.475
4 / 3 * PI * (r to the power of 3) = 796.328

Press any key to continue . . .*/