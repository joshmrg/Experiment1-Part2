#include <iostream>
using namespace std;
int main()
{
	double mass, density, volume;
	cout << "Input mass (in grams) and density (in grams per cubic centimeters) and will yield to its volume (in cubic centimeters)" << endl << endl;

	cout << "Input mass: ";
	cin >> mass;
	
	cout << "\nInput density: " ;
	cin >> density;

	volume = mass / (4*density);

	cout << "\nVolume = " << volume << "cm^3" << endl;

	system("pause");
	return 0;
}
