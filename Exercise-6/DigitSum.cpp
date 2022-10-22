#include <iostream>
#include "DigitSum.h"
using namespace std;
int DigitSum() {
	int x;
	int result = 0;
	int temp;
	cout << "Type any number" << endl;
	cin >> x;
	while (x != 0) {
		temp = x % 10;
		result += temp;
		x -= temp;
		x /= 10;
	}
	cout << result << endl;
	return 0;
}


