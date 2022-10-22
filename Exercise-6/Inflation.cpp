#include <iostream>
#include "Inflation.h"
using namespace std;

int Inflation() {
	double cost;
	int years;
	double inflation;
	cout << "Enter the cost of the item, the amount of years from now, and the inflation rate" << endl;
	cin >> cost >> years >> inflation;
	inflation *= .01;
	inflation += 1;
	for (int i = 0; i < years ; i++){
		cost *= inflation;
	}
	cout << "The total cost in " << years << " years will be " << cost << endl;
	return 0;
}

