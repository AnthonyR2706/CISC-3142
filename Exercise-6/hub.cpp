#include <iostream>
#include "DigitSum.h"
#include "Inflation.h"
#include "LethalDose.h"
#include "Prime.h"
#include "UppercaseWord.h"

using namespace std;

int main() {
	int x;
	while(true){
	cout << "Enter the number of the program you wish to run" << endl;
	cout << "1. Digit Sum" << endl;
	cout << "2. Inflation" << endl;
	cout << "3. Lethal Dose" << endl;
	cout << "4. Prime Numbers" << endl;
	cout << "5. Uppercase Word" << endl;
	cout << "6. End Program" << endl;
	cin >> x;
		switch(x){
			case 1:
				DigitSum();
				break;
			case 2:
				Inflation();
				break;
			case 3: 
				LethalDose();
				break;
			case 4:
				Prime();
				break;
			case 5:
				UppercaseWord();
				break;
			case 6:
				return 0;
		}	
	}
}


