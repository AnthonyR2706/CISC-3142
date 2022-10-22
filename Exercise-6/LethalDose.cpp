#include <iostream>
#include "LethalDose.h"
using namespace std;

int LethalDose(){
	double dose;
	double mass;
	double target;
	cout << "Enter the lethal dose for a mouse in grams, the weight of the mouse in grams, and your target weight in kilograms" << endl;
	cin >> dose >> mass >> target;
	target *= 1000;
	target *= dose/mass;
	target /= .35;
	cout << "To stay safe do not drink over " << target << " cans of soda" << endl;
	return 0;
}
