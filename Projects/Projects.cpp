#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float weight, height, index;

	cout << "Please enter your weight in kg: ";
	cin >> weight;
	cout << "Please enter your height in cm: ";
	cin >> height;

	height = height / 100;
	index = weight / (float)pow(height, 2);

	cout << "Your body mass indeks: " << fixed << setprecision(2) << index << endl;

	if (index <= 18.5)
		cout << "Weak" << endl;
	else if (18.5 < index && index <= 24.9)
		cout << "Normal Weight" << endl;
	else if (25 <= index && index <= 29.9)
		cout << "Over Weight" << endl;
	else if (30 <= index && index <= 34.9)
		cout << "Obese" << endl;
	else if (35 <= index && index <= 39.9)
		cout << "Extremely Obese" << endl;
	else if (40 <= index)
		cout << "Morbidly Obese" << endl;
	else
		cout << "please enter appropriate values!!" << endl;

	return 0;
}