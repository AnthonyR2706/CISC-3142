#include <iostream>
#include <vector>
#include "Prime.h"
using namespace std;

int Prime() {
	vector<int> prime;
	bool isprime = true;
	prime.push_back(2);
	cout << 2 << endl;
	for(int i = 3; i <= 100; i++){
		isprime = true;
		for (auto j : prime){
			//cout << i << " " << j << " " << i % j << endl;
			if(i % j == 0){
				isprime = false;
			}
		}
			if(isprime){
				cout << i << endl;
				prime.push_back(i);
			}
		
	}
	return 0;
}

